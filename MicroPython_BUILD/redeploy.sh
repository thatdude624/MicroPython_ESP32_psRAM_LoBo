#!/bin/bash
./BUILD.sh -v || exit 1
echo "mmi" | sudo -S echo "Refreshing sudo"
sudo ./BUILD.sh flash
