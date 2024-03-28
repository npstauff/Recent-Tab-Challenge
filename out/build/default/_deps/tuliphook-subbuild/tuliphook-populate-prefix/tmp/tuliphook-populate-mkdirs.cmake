# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "D:/Geode Mods/Learn/My Mod/out/build/default/_deps/tuliphook-src"
  "D:/Geode Mods/Learn/My Mod/out/build/default/_deps/tuliphook-build"
  "D:/Geode Mods/Learn/My Mod/out/build/default/_deps/tuliphook-subbuild/tuliphook-populate-prefix"
  "D:/Geode Mods/Learn/My Mod/out/build/default/_deps/tuliphook-subbuild/tuliphook-populate-prefix/tmp"
  "D:/Geode Mods/Learn/My Mod/out/build/default/_deps/tuliphook-subbuild/tuliphook-populate-prefix/src/tuliphook-populate-stamp"
  "D:/Geode Mods/Learn/My Mod/out/build/default/_deps/tuliphook-subbuild/tuliphook-populate-prefix/src"
  "D:/Geode Mods/Learn/My Mod/out/build/default/_deps/tuliphook-subbuild/tuliphook-populate-prefix/src/tuliphook-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "D:/Geode Mods/Learn/My Mod/out/build/default/_deps/tuliphook-subbuild/tuliphook-populate-prefix/src/tuliphook-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "D:/Geode Mods/Learn/My Mod/out/build/default/_deps/tuliphook-subbuild/tuliphook-populate-prefix/src/tuliphook-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
