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
    cat $filepath | $curr_dir/solver.out > $filename.res
    diff -Z -B $filename.res output${filename: -1}.txt
    
done

echo "End checking in: $curr_dir"
