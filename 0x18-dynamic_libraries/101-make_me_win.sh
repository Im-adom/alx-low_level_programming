#!/bin/bash
wget -P /tmp https://github.com/Im-adom/alx-low_level_programming/raw/master/0x18-dynamic_libraries/ticket.so
export LD_PRELOAD=/tmp/ticket.so
