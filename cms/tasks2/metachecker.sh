#!/bin/bash

curr_dir=$(pwd)
RED="\e[31m"
NC="\e[30m"

checker="checker.sh"

echo "Started checking in: $curr_dir"

if [ -f checker.sh ]; then
    echo "Using $checker"
else
    echo "No checker!"
    exit 1
fi

issues=""
for filepath in `find  ./* -type d`; do

    cd $curr_dir/$filepath 
    $curr_dir/$checker || issues=$issues/$filepath
    cd ..

done

if [[ $issues != "" ]]; then
    echo -e "${RED}Error: There are issues in: $issues ${NC}"
    exit 1
fi
echo "End checking in: $curr_dir"
