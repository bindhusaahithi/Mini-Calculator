#!/bin/bash

# Compile the program
gcc -std=c99 -o sayNumber sayNumber.c

i=1
while [[ $i -le 2 ]]
do
    echo "running with i = $i"
    ./sayNumber $((2**i))
    ((i = i + 1))
done
