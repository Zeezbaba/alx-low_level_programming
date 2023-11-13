#!/bin/bash
wget -P /tmp/ https://raw.github.com./Zeezbaba/alx-low_level_programming/main/0x18-dynamic_libraries/gigmillion.so
export LD_PRELOAD=/tmp/gigmillion.so
