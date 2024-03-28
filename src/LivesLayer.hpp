#include <Geode/DefaultInclude.hpp>
#include <Geode/ui/GeodeUI.hpp>
#include <Geode/utils/web.hpp>
#include <cocos2d.h>
#include <Geode/Geode.hpp>
#include <random>
#include <string>
#include <math.h>

using namespace geode::prelude;

extern int lives = Mod::get()->getSettingValue<int64_t>("lives");
extern int skips = Mod::get()->getSettingValue<int64_t>("skips");
extern int practiceRuns = Mod::get()->getSettingValue<int64_t>("practice-runs");
extern int numLevels = 0;
extern bool isChallenge = false;
extern bool needNewLevel = false;

bool downloading = false;
std::string currentLevelId = "";

class LivesLayer : public CCLayer, LevelDownloadDelegate
{
protected:
	bool init() override;
	
	void keyBackClicked() override;


public:
	static LivesLayer* refresh();
	static LivesLayer* create();
	static LivesLayer* scene();

	void onGoBack(CCObject*);
	void startRun(CCObject*);
	void nextLevel(CCObject*);
	void getLevels();
	void gotLevels(std::string const& string);
	std::vector<std::string> splitString(const std::string& s, char delimiter);
	void getLevel(CCObject* self);
	void levelDownloadFinished(GJGameLevel* level);
	void levelDownloadFailed(int p0);
	void resetChallenge();
};

void LivesLayer::startRun(CCObject*)
{
	isChallenge = true;
	lives = Mod::get()->getSettingValue<int64_t>("lives");
	LivesLayer::refresh();
	LivesLayer::getLevels();
}

void LivesLayer::nextLevel(CCObject* self)
{
	if (downloading)
	{
		FLAlertLayer::create("Wait to start", "Downloading level", "Ok")->show();
		return;
	}
	LivesLayer::getLevel(self);
}

void LivesLayer::getLevels()
{
	int page = 0;
	int perPage = 10;
	page = (int)floor(numLevels / perPage);
	downloading = true;
	
	web::AsyncWebRequest()
		.userAgent("")
		.postRequest()
		.bodyRaw(fmt::format("diff=-1&type=4&page={}&len=1&secret=Wmfd2893gb7", rand()%3060))
		.fetch("http://www.boomlings.com/database/getGJLevels21.php")
		.text()
		.then([this](std::string const& resultat) {
		log::info("successful: {}", resultat);
		gotLevels(resultat);
			})
		.expect([](std::string const& error) {
				log::info("failed: {}", error);
			});
}

void LivesLayer::gotLevels(std::string const& string)
{
	
	downloading = false;
	std::vector<std::string> levelvect = splitString(string, '|');
	std::string level = levelvect[numLevels%10];
	std::vector<std::string> leveldata = splitString(level, ':');
	log::info("level: {}", leveldata[1]);
	currentLevelId = leveldata[1];
}

std::vector<std::string> LivesLayer::splitString(const std::string& s, char delimiter)
{
	std::vector<std::string> tokens;
	std::istringstream ss(s);
	std::string token;
	while (std::getline(ss, token, delimiter))
	{
		tokens.push_back(token);
	}
	return tokens;
}

void LivesLayer::getLevel(CCObject* self)
{
	GameLevelManager::sharedState()->m_levelDownloadDelegate = this;
	GameLevelManager::sharedState()->downloadLevel(stoi(currentLevelId), true);
}

void LivesLayer::levelDownloadFinished(GJGameLevel* level)
{
	downloading = false;
	CCDirector::get()->replaceScene(CCTransitionFade::create(0.5f, LevelInfoLayer::scene(level, false)));
}

void LivesLayer::levelDownloadFailed(int p0)
{
	log::error("failed to download level: {}", p0);
}

bool LivesLayer::init()
{
	if (!CCLayer::init())
		return false;
	srand(time(NULL));

	GameManager* manager = GameManager::sharedState();
	auto direction = CCDirector::sharedDirector();
	auto size = direction->getWinSize();

	CCSprite* bg = CCSprite::create("game_bg_01_001.png");
	bg->setPosition({ size.width / 2, size.height / 2 });
	bg->setScale(1.2);
	bg->setColor(ccColor3B(24, 76, 154));
	addChild(bg, -10);

	CCLabelBMFont* title = CCLabelBMFont::create("100 lives challenge", "goldFont.fnt");
	title->setPosition({ size.width / 2, size.height - 30 });
	addChild(title);

	CCMenu* back_btn_menu = CCMenu::create();
	back_btn_menu->setPosition(size.width / 2 - 261, size.height - 40);
	addChild(back_btn_menu);

	auto backBtn = CCMenuItemSpriteExtra::create(CCSprite::createWithSpriteFrameName("GJ_arrow_03_001.png"), this, menu_selector(LivesLayer::onGoBack));
	back_btn_menu->addChild(backBtn);

	if (!isChallenge)
	{
		CCMenu* startMenu = CCMenu::create();
		CCMenuItemSpriteExtra* startBtn = CCMenuItemSpriteExtra::create(CCSprite::createWithSpriteFrameName("GJ_longBtn03_001.png"), this, menu_selector(LivesLayer::startRun));
		CCLabelBMFont* startText = CCLabelBMFont::create("Start Challenge", "bigFont.fnt");
		startText->setScale(0.5f);
		startText->setPosition({ startBtn->getPositionX()+85, startBtn->getPositionY()+16});

		addChild(startMenu);
		startMenu->addChild(startBtn);
		startBtn->addChild(startText);
	}
	else
	{
		CCMenu* startMenu = CCMenu::create();
		CCMenuItemSpriteExtra* startBtn = CCMenuItemSpriteExtra::create(CCSprite::createWithSpriteFrameName("GJ_playBtn2_001.png"), this, menu_selector(LivesLayer::nextLevel));
		CCLabelBMFont* livesText = CCLabelBMFont::create(fmt::format("Lives Left: {} | Levels Completed: {}", lives, numLevels).c_str(), "bigFont.fnt");
		livesText->setScale(0.5f);
		livesText->setPosition({ size.width/2, startBtn->getPositionY() + 36 });

		CCSprite* pracSpr = CCSprite::createWithSpriteFrameName("checkpoint_01_001.png");
		CCLabelBMFont* pracText = CCLabelBMFont::create(fmt::format("x{}", practiceRuns).c_str(), "bigFont.fnt");
		pracSpr->setPosition({ size.width / 2 - 55, startBtn->getPositionY() + 70 });
		pracText->setPosition({ size.width / 2 - 25, startBtn->getPositionY() + 70 });
		pracText->setScale(0.75f);

		CCSprite* skipSpr = CCSprite::createWithSpriteFrameName("edit_rightBtn2_001.png");
		CCLabelBMFont* skipText = CCLabelBMFont::create(fmt::format("x{}", skips).c_str(), "bigFont.fnt");
		skipSpr->setPosition({ size.width / 2 + 15, startBtn->getPositionY() + 70 });
		skipSpr->setScale(1.25f);

		skipText->setPosition({ size.width / 2 + 45, startBtn->getPositionY() + 70 });
		skipText->setScale(0.75f);

		addChild(pracText);
		addChild(pracSpr);
		addChild(skipText);
		addChild(skipSpr);

		if (!downloading)
		{
			addChild(startMenu);
			startMenu->addChild(startBtn);
		}

		addChild(livesText);
	}

	if (isChallenge && needNewLevel)
	{
		LivesLayer::getLevels();
		needNewLevel = false;
	}

	return true;
}

LivesLayer* LivesLayer::refresh()
{
	FMODAudioEngine::sharedEngine()->stopAllMusic();
	FMODAudioEngine::sharedEngine()->stopAllActions();
	FMODAudioEngine::sharedEngine()->stopAllEffects();

#ifdef GEODE_IS_WINDOWS
	CCDirector::get()->getOpenGLView()->showCursor(true);
#endif // GEODE_IS_WINDOWS


	return LivesLayer::scene();
}

void LivesLayer::keyBackClicked()
{
	this->onGoBack(nullptr);
}

void LivesLayer::onGoBack(CCObject* sender)
{
	if (isChallenge)
	{
		createQuickPopup("Exit", fmt::format("Are you sure you want to exit? This will end your run.", skips).c_str(), "No", "Yes", [this, sender](FLAlertLayer*, bool btn2) {
			if (!btn2)
			{
				return;
			}
			else
			{
				resetChallenge();
				CCDirector::sharedDirector()->pushScene(CreatorLayer::scene());
			}
			}, true);
		
	}
	else
	{
		CCDirector::sharedDirector()->pushScene(CreatorLayer::scene());
	}
}

void LivesLayer::resetChallenge()
{
	lives = Mod::get()->getSettingValue<int64_t>("lives");
	numLevels = 0;
	skips = Mod::get()->getSettingValue<int64_t>("skips");
	practiceRuns = Mod::get()->getSettingValue<int64_t>("practice-runs");
	isChallenge = false;
	needNewLevel = false;
}

LivesLayer* LivesLayer::create()
{
	auto ret = new LivesLayer;
	if (ret->init())
	{
		ret->autorelease();
		return ret;
	}
	CC_SAFE_DELETE(ret);
	return nullptr;
}

LivesLayer* LivesLayer::scene()
{
	auto layer = LivesLayer::create();
	auto scene = CCScene::create();
	scene->addChild(layer);
	auto transition = CCTransitionFade::create(0.5f, scene);
	CCDirector::sharedDirector()->pushScene(transition);
	return layer;
}

