#!/bin/sh
set -e
if test "$CONFIGURATION" = "Debug"; then :
  cd "/Users/benbromley/University/UoD/Modules/02 - Audio Software Engineering/Programming/ALL_SDK/projects/DuckingDelay/mac_build/cmake/vst_cmake/public.sdk/samples/vst-hosting/validator"
  codesign --force --verbose --sign - /Users/benbromley/University/UoD/Modules/02\ -\ Audio\ Software\ Engineering/Programming/ALL_SDK/projects/DuckingDelay/mac_build/bin/Debug/validator
  cd "/Users/benbromley/University/UoD/Modules/02 - Audio Software Engineering/Programming/ALL_SDK/projects/DuckingDelay/mac_build/cmake/vst_cmake/public.sdk/samples/vst-hosting/validator"
  "/Users/benbromley/University/UoD/Modules/02 - Audio Software Engineering/Programming/ALL_SDK/projects/DuckingDelay/mac_build/bin/Debug/validator" -selftest
fi
if test "$CONFIGURATION" = "Release"; then :
  cd "/Users/benbromley/University/UoD/Modules/02 - Audio Software Engineering/Programming/ALL_SDK/projects/DuckingDelay/mac_build/cmake/vst_cmake/public.sdk/samples/vst-hosting/validator"
  codesign --force --verbose --sign - /Users/benbromley/University/UoD/Modules/02\ -\ Audio\ Software\ Engineering/Programming/ALL_SDK/projects/DuckingDelay/mac_build/bin/Release/validator
  cd "/Users/benbromley/University/UoD/Modules/02 - Audio Software Engineering/Programming/ALL_SDK/projects/DuckingDelay/mac_build/cmake/vst_cmake/public.sdk/samples/vst-hosting/validator"
  "/Users/benbromley/University/UoD/Modules/02 - Audio Software Engineering/Programming/ALL_SDK/projects/DuckingDelay/mac_build/bin/Release/validator" -selftest
fi

