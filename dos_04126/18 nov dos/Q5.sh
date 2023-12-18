#!/bin/bash
sum=0
count=$#

for num in "$@";do
	sum=$((sum + num))
done
average=$(echo "$sum / $count" | bc)
echo "Average is $average"
