# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

if(EXISTS "D:/Geode Mods/Learn/My Mod/out/build/default/_deps/tuliphook-subbuild/tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-gitclone-lastrun.txt" AND EXISTS "D:/Geode Mods/Learn/My Mod/out/build/default/_deps/tuliphook-subbuild/tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-gitinfo.txt" AND
  "D:/Geode Mods/Learn/My Mod/out/build/default/_deps/tuliphook-subbuild/tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-gitclone-lastrun.txt" IS_NEWER_THAN "D:/Geode Mods/Learn/My Mod/out/build/default/_deps/tuliphook-subbuild/tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-gitinfo.txt")
  message(STATUS
    "Avoiding repeated git clone, stamp file is up to date: "
    "'D:/Geode Mods/Learn/My Mod/out/build/default/_deps/tuliphook-subbuild/tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-gitclone-lastrun.txt'"
  )
  return()
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E rm -rf "D:/Geode Mods/Learn/My Mod/out/build/default/_deps/tuliphook-src"
  RESULT_VARIABLE error_code
)
if(error_code)
  message(FATAL_ERROR "Failed to remove directory: 'D:/Geode Mods/Learn/My Mod/out/build/default/_deps/tuliphook-src'")
endif()

# try the clone 3 times in case there is an odd git clone issue
set(error_code 1)
set(number_of_tries 0)
while(error_code AND number_of_tries LESS 3)
  execute_process(
    COMMAND "C:/Program Files/Git/cmd/git.exe" 
            clone --no-checkout --config "advice.detachedHead=false" "https://github.com/geode-sdk/TulipHook.git" "tuliphook-src"
    WORKING_DIRECTORY "D:/Geode Mods/Learn/My Mod/out/build/default/_deps"
    RESULT_VARIABLE error_code
  )
  math(EXPR number_of_tries "${number_of_tries} + 1")
endwhile()
if(number_of_tries GREATER 1)
  message(STATUS "Had to git clone more than once: ${number_of_tries} times.")
endif()
if(error_code)
  message(FATAL_ERROR "Failed to clone repository: 'https://github.com/geode-sdk/TulipHook.git'")
endif()

execute_process(
  COMMAND "C:/Program Files/Git/cmd/git.exe" 
          checkout "047031e" --
  WORKING_DIRECTORY "D:/Geode Mods/Learn/My Mod/out/build/default/_deps/tuliphook-src"
  RESULT_VARIABLE error_code
)
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: '047031e'")
endif()

set(init_submodules TRUE)
if(init_submodules)
  execute_process(
    COMMAND "C:/Program Files/Git/cmd/git.exe" 
            submodule update --recursive --init 
    WORKING_DIRECTORY "D:/Geode Mods/Learn/My Mod/out/build/default/_deps/tuliphook-src"
    RESULT_VARIABLE error_code
  )
endif()
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: 'D:/Geode Mods/Learn/My Mod/out/build/default/_deps/tuliphook-src'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy "D:/Geode Mods/Learn/My Mod/out/build/default/_deps/tuliphook-subbuild/tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-gitinfo.txt" "D:/Geode Mods/Learn/My Mod/out/build/default/_deps/tuliphook-subbuild/tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-gitclone-lastrun.txt"
  RESULT_VARIABLE error_code
)
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: 'D:/Geode Mods/Learn/My Mod/out/build/default/_deps/tuliphook-subbuild/tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-gitclone-lastrun.txt'")
endif()
