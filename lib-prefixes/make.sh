#!/bin/bash

SRMAKE_FLAGS=${SRMAKE_FLAGS}

make_prefixes() {
  DEBUG=$1

  ../bin/rlmake "${SCRIPT_FLAGS[@]}" rich-prefix-exe \
    -o ../lib/rich"$DEBUG".exe-prefix || exit 1

  ../bin/rlmake "${SCRIPT_FLAGS[@]}" slim-prefix-exe \
    -o ../lib/slim"$DEBUG".exe-prefix || exit 1

  ../bin/rlmake "${SCRIPT_FLAGS[@]}" --makelib  rich-prefix-lib \
    -o ../lib/rich"$DEBUG".lib-prefix || exit 1
}

rm -f *.rasl

SCRIPT_FLAGS=( --scratch --static )
make_prefixes "" || exit 1

SCRIPT_FLAGS=( --scratch --static --debug )
make_prefixes "-debug" || exit 1

chmod -x ../lib/*.*-prefix || exit 1
