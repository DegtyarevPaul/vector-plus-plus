#!/bin/bash

curr_dir=$(pwd)

checker="checker.sh"

echo "Started checking in: $curr_dir"

if [ -f checker.sh ]; then
    echo "Using $checker"
else
    echo "No checker!"
    exit 1
fi

for filepath in `find  ./* -type d`; do

    ( cd $curr_dir/$filepath && $curr_dir/$checker )

done

echo "End checking in: $curr_dir"
