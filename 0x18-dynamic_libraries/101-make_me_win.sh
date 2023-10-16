#!/bin/bash
wget -N -P /tmp  https://raw.githubusercontent.com/RAJA2023H/alx-low_level_programming/tree/master/0x18-dynamic_libraries/rrondom.so
export LD_PRELOAD="/tmp/rrondom.so"
