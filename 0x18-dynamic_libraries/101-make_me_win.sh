#!/bin/bash
wget -q -O /tmp/libjackpot.so https://github.com/SeesKo/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libjackpot.so
export LD_PRELOAD=/tmp/libjackpot.so
