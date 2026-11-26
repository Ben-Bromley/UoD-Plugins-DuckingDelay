#!/bin/sh
set -e
if test "$CONFIGURATION" = "Debug"; then :
  cd "/Users/benbromley/University/UoD/Modules/02 - Audio Software Engineering/Programming/ALL_SDK/projects/DuckingDelay/mac_build/project_source/cmake/vst_cmake"
  codesign --force --verbose --sign - /Users/benbromley/University/UoD/Modules/02\ -\ Audio\ Software\ Engineering/Programming/ALL_SDK/projects/DuckingDelay/mac_build/VST3/Debug/DuckingDelay_VST.vst3
  cd "/Users/benbromley/University/UoD/Modules/02 - Audio Software Engineering/Programming/ALL_SDK/projects/DuckingDelay/mac_build/bin"
  /opt/homebrew/bin/cmake -E echo [SMTG] Validator started...
  "/Users/benbromley/University/UoD/Modules/02 - Audio Software Engineering/Programming/ALL_SDK/projects/DuckingDelay/mac_build/bin/Debug/validator" /Users/benbromley/University/UoD/Modules/02\ -\ Audio\ Software\ Engineering/Programming/ALL_SDK/projects/DuckingDelay/mac_build/VST3/Debug/DuckingDelay_VST.vst3 
  /opt/homebrew/bin/cmake -E echo [SMTG] Validator finished.
  cd "/Users/benbromley/University/UoD/Modules/02 - Audio Software Engineering/Programming/ALL_SDK/projects/DuckingDelay/mac_build/project_source/cmake/vst_cmake"
  /opt/homebrew/bin/cmake -E make_directory /Users/benbromley/Library/Audio/Plug-Ins/VST3
  ln -svfF /Users/benbromley/University/UoD/Modules/02\ -\ Audio\ Software\ Engineering/Programming/ALL_SDK/projects/DuckingDelay/mac_build/VST3/Debug/DuckingDelay_VST.vst3 /Users/benbromley/Library/Audio/Plug-Ins/VST3/DuckingDelay_VST.vst3
fi
if test "$CONFIGURATION" = "Release"; then :
  cd "/Users/benbromley/University/UoD/Modules/02 - Audio Software Engineering/Programming/ALL_SDK/projects/DuckingDelay/mac_build/project_source/cmake/vst_cmake"
  codesign --force --verbose --sign - /Users/benbromley/University/UoD/Modules/02\ -\ Audio\ Software\ Engineering/Programming/ALL_SDK/projects/DuckingDelay/mac_build/VST3/Release/DuckingDelay_VST.vst3
  cd "/Users/benbromley/University/UoD/Modules/02 - Audio Software Engineering/Programming/ALL_SDK/projects/DuckingDelay/mac_build/bin"
  /opt/homebrew/bin/cmake -E echo [SMTG] Validator started...
  "/Users/benbromley/University/UoD/Modules/02 - Audio Software Engineering/Programming/ALL_SDK/projects/DuckingDelay/mac_build/bin/Release/validator"  /Users/benbromley/University/UoD/Modules/02\ -\ Audio\ Software\ Engineering/Programming/ALL_SDK/projects/DuckingDelay/mac_build/VST3/Release/DuckingDelay_VST.vst3
  /opt/homebrew/bin/cmake -E echo [SMTG] Validator finished.
  cd "/Users/benbromley/University/UoD/Modules/02 - Audio Software Engineering/Programming/ALL_SDK/projects/DuckingDelay/mac_build/project_source/cmake/vst_cmake"
  /opt/homebrew/bin/cmake -E make_directory /Users/benbromley/Library/Audio/Plug-Ins/VST3
  ln -svfF /Users/benbromley/University/UoD/Modules/02\ -\ Audio\ Software\ Engineering/Programming/ALL_SDK/projects/DuckingDelay/mac_build/VST3/Release/DuckingDelay_VST.vst3 /Users/benbromley/Library/Audio/Plug-Ins/VST3/DuckingDelay_VST.vst3
fi

