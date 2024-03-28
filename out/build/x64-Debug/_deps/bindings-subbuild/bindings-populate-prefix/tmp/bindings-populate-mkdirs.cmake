# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "D:/Geode Mods/Learn/My Mod/out/build/x64-Debug/_deps/bindings-src"
  "D:/Geode Mods/Learn/My Mod/out/build/x64-Debug/_deps/bindings-build"
  "D:/Geode Mods/Learn/My Mod/out/build/x64-Debug/_deps/bindings-subbuild/bindings-populate-prefix"
  "D:/Geode Mods/Learn/My Mod/out/build/x64-Debug/_deps/bindings-subbuild/bindings-populate-prefix/tmp"
  "D:/Geode Mods/Learn/My Mod/out/build/x64-Debug/_deps/bindings-subbuild/bindings-populate-prefix/src/bindings-populate-stamp"
  "D:/Geode Mods/Learn/My Mod/out/build/x64-Debug/_deps/bindings-subbuild/bindings-populate-prefix/src"
  "D:/Geode Mods/Learn/My Mod/out/build/x64-Debug/_deps/bindings-subbuild/bindings-populate-prefix/src/bindings-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "D:/Geode Mods/Learn/My Mod/out/build/x64-Debug/_deps/bindings-subbuild/bindings-populate-prefix/src/bindings-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "D:/Geode Mods/Learn/My Mod/out/build/x64-Debug/_deps/bindings-subbuild/bindings-populate-prefix/src/bindings-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
