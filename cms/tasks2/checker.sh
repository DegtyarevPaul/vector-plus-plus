#!/bin/bash

curr_dir=$(pwd)

echo "Started checking in: $curr_dir"

g++ solver.cc -O3 -o solver.out

if [ -f solver.out ]; then
    rm -fv "*.res"
else
    echo "No solver!"
    exit 1
fi

for filepath in $curr_dir/input*.txt; do

    filename=`basename $filepath .txt`
    echo "Working with test case: $filename"
    cat $filepath | $curr_dir/solver.out > $filename.res
    diff -w -Z -B $filename.res output${filename: -1}.txt || exit 2
    
done

echo "End checking in: $curr_dir"
