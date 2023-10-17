#!/bin/bash
wget -N -P /tmp https://github.com/RAJA2023H/alx-low_level_programming/blob/b3b4c1c3cf551184cccda938905cc75a2ced733b/0x18-dynamic_libraries/rrondom.so
export LD_PRELOAD="/tmp/rrondom.so"
