#!/bin/bash
read -p "Enter the number of times to execute the command: " n
for ((i=1; i<=$n; i++))
do
    ./PmergeMe `jot -r 300 1 10000 | tr '\n' ' '` >> test.txt
done