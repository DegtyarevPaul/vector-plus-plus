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

for filepath in $curr_dir/input.* ; do

    filename=`basename $filepath`
    echo "Working with test case: $filename"
    cat $filepath | $curr_dir/solver.out > temp_$filename.res
    diff -w -Z -B temp_$filename.res output.${filename: -1} || exit 2
    #mv $filepath $curr_dir/input.${filename: -1}
    #mv $curr_dir/output${filename: -1}.txt $curr_dir/output.${filename: -1}     
done

zip -u testcases.zip input.* output.*

echo "End checking in: $curr_dir"
