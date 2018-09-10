#!/bin/bash

mkdir -p bin
source ./scripts/load-config.sh . || exit 1
source ./scripts/platform-specific.sh

APPENDER=rasl-appender/_rasl-appender$(platform_exe_suffix)
$CPPLINEE$APPENDER rasl-appender/rasl-appender.cpp || exit 1

make_dir() {
  DIR=$1
  TARGET=bin/$2$(platform_exe_suffix)

  $CPPLINEE$TARGET -Isrlib/scratch -DDONT_PRINT_STATISTICS \
    $DIR/*.cpp \
    $(platform_subdir_lookup srlib/scratch)/refalrts-platform-specific.cpp \
    srlib/scratch/platform-POSIX/refalrts-platform-POSIX.cpp

  if [ ! -e $TARGET ]; then
    echo "Can't create file $TARGET, aborting"
    exit 1
  fi

  $APPENDER $TARGET $DIR/*.rasl || exit 1
}

make_dir compiler srefc-core
make_dir lexgen lexgen
make_dir srmake srmake-core
make_dir srlib-rich-prefix srlib-rich-prefix
mv bin/srlib-rich-prefix$(platform_exe_suffix) srlib/rich/rich.exe-prefix
make_dir srlib-rich-debug-prefix srlib-rich-debug-prefix
mv bin/srlib-rich-debug-prefix$(platform_exe_suffix) srlib/rich-debug/rich-debug.exe-prefix
make_dir srlib-slim-prefix srlib-slim-prefix
mv bin/srlib-slim-prefix$(platform_exe_suffix) srlib/slim/slim.exe-prefix
make_dir srlib-slim-debug-prefix srlib-slim-debug-prefix
mv bin/srlib-slim-debug-prefix$(platform_exe_suffix) srlib/slim-debug/slim-debug.exe-prefix
chmod -x srlib/*/*.exe-prefix

rm -f $APPENDER
