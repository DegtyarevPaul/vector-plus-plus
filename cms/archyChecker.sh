#!/bin/bash

curr_dir=$(pwd)
RED="\e[31m"
NC="\e[30m"

metachecker="metachecker.sh"

echo "ArchyStarted checking in: $curr_dir"

issues=""
for filepath in `find ./* -maxdepth 0 -type d`; do

    cd $curr_dir/$filepath 
    $curr_dir/$filepath/$metachecker || issues=$issues/$filepath
    cd ..

done

if [[ $issues != "" ]]; then
    echo -e "${RED}Error: There are issues in: $issues ${NC}"
    exit 1
fi
echo "End checking in: $curr_dir"
