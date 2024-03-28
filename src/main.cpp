/**
 * Include the Geode headers.
 */
#include <Geode/Geode.hpp>
#include <string>

#include "LivesLayer.hpp";

/**
 * Brings cocos2d and all Geode namespaces to the current scope.
 */
using namespace geode::prelude;

bool hasInit = false;
bool inPractice = false;

#include <Geode/modify/CreatorLayer.hpp>
#include <Geode/modify/LevelInfoLayer.hpp>
#include <Geode/modify/PlayLayer.hpp>
#include <Geode/modify/PauseLayer.hpp>
#include <Geode/modify/EndLevelLayer.hpp>
class $modify(ChalCallback, CreatorLayer) {

	CCSprite* expertBtnSprite;
	CCMenuItemSpriteExtra* expertButton;

	bool init()
	{
		bool result = CreatorLayer::init();
		auto director = CCDirector::sharedDirector();
		auto size = director->getWinSize();
		auto creatorButtons = this->getChildByID("creator-buttons-menu");

		CCMenu* menu = CCMenu::create();

		CCMenuItemSpriteExtra* eventButton = reinterpret_cast<CCMenuItemSpriteExtra*>(creatorButtons->getChildByID("event-button"));

		m_fields->expertBtnSprite = CCSprite::create("hundred.png"_spr);
		m_fields->expertBtnSprite->setScale(0.805);

		m_fields->expertButton = CCMenuItemSpriteExtra::create(m_fields->expertBtnSprite, this, menu_selector(ChalCallback::onSelect));

		eventButton->setVisible(false);

		m_fields->expertButton->setPosition({ eventButton->getPositionX()+2.4f, eventButton->getPositionY()-2.4f});
		m_fields->expertButton->setID("lives-button");

		creatorButtons->addChild(m_fields->expertButton);

		return result;
	}

	void onSelect(CCObject* obj)
	{
		LivesLayer::scene();
	}
};

class $modify(LevelInfoLayer)
{
	bool init(GJGameLevel* level, int p0)
	{
		if (!LevelInfoLayer::init(level, p0))
			return false;

		return true;
	}

	void onBack(CCObject* sender)
	{
		if (isChallenge)
		{
			LivesLayer::scene();
		}
		else
		{
			LevelInfoLayer::onBack(sender);
		}
	}
};

class $modify(ChalPlayLayer, PlayLayer)
{
	CCLabelBMFont* livesT;
	

	bool init(GJGameLevel * level, bool b, bool b1)
	{
		if (!PlayLayer::init(level, b, b1))
			return false;

		if (isChallenge)
		{
			auto size = CCDirector::sharedDirector()->getWinSize();

			m_fields->livesT = CCLabelBMFont::create(fmt::format("Lives: {}", lives).c_str(), "bigFont.fnt");
			m_fields->livesT->setScale(0.4f);
			m_fields->livesT->setPosition({ 30, size.height - 50 });

			addChild(m_fields->livesT);
		}

		return true;
	}

	void resetLevel()
	{
		if (isChallenge && hasInit && !inPractice && !PlayLayer::m_isPracticeMode)
		{
			lives--;
			m_fields->livesT->setString(fmt::format("Lives: {}", lives).c_str());
			if (lives <= 0)
			{
				numLevels = 0;
				practiceRuns = Mod::get()->getSettingValue<int64_t>("practice-runs");
				skips = Mod::get()->getSettingValue<int64_t>("skips");
				needNewLevel = false;
				isChallenge = false;
				lives = Mod::get()->getSettingValue<int64_t>("lives");
				LivesLayer::refresh();
				return;
			}
		}
		hasInit = true;
		PlayLayer::resetLevel();
	}
};

class $modify(ChalPauseLayer, PauseLayer)
{
	void skipLevel(CCObject* sender)
	{
		if (skips <= 0)
		{
			FLAlertLayer::create("Out of skips", "No skips left", "Ok")->show();
			return;
		}
		else
		{
			createQuickPopup("Skip", fmt::format("Do you want to skip this level? Skips Left: {}", skips).c_str(), "No", "Yes", [this, sender](FLAlertLayer*, bool btn2) {
				if (btn2)
				{
					numLevels++;
					lives++;
					skips--;
					inPractice = false;
					needNewLevel = true;
					LivesLayer::refresh();
				}
			}, true);
		}
	}

	void customSetup()
	{
		PauseLayer::customSetup();

		if (!isChallenge) return;

		auto centerButtons = this->getChildByID("center-button-menu");
		CCMenuItemSpriteExtra* exitButton = reinterpret_cast<CCMenuItemSpriteExtra*>(centerButtons->getChildByID("exit-button"));

		CCSprite* spr = CCSprite::createWithSpriteFrameName("edit_rightBtn2_001.png");
		CCMenuItemSpriteExtra* btn = CCMenuItemSpriteExtra::create(spr, this, menu_selector(ChalPauseLayer::skipLevel));

		btn->setID("hundred-lives-skip");
		btn->setPosition({ -237.750f,-40 });
		centerButtons->addChild(btn);
	}

	void onPracticeMode(CCObject * sender)
	{
		if (isChallenge)
		{
			if (!inPractice)
			{
				if (practiceRuns > 0)
				{
					createQuickPopup("Use Practice Run", fmt::format("Would you like to use one of your practice runs? Runs left: {}", practiceRuns), "No", "Yes", [this, sender](FLAlertLayer*, bool btn2) {
						if (btn2)
						{
							inPractice = true;
							practiceRuns--;
							PauseLayer::onPracticeMode(sender);
						}
						}, true);
				}
				else
				{
					FLAlertLayer::create("Cant Practice!", "Out of practice runs", "Ok")->show();
				}
			}
			else
			{
				inPractice = false;
				PauseLayer::onPracticeMode(sender);
			}
		}
		else
		{
			PauseLayer::onPracticeMode(sender);
		}
	}
};

class $modify(EndLevelLayer)
{
	void showLayer(bool p0)
	{ // find whatever gets called when u hit the end
		EndLevelLayer::showLayer(p0);
		PlayLayer* pl = PlayLayer::get(); // changed to make porting to mac easier :]
		
		if (isChallenge)
		{
			hasInit = false;

			if (!inPractice)
			{
				numLevels++;
			}
			inPractice = false;
			needNewLevel = true;
			LivesLayer::refresh();
		}
	}
};

