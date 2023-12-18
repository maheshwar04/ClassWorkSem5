#!/bin/bash
echo "Enter a number of whose multiplication table you want"
read number
echo "The multiplication table for this number is"
for ((i=1; i<=10; i++));
do
	result = $((number * i))
	echo "$number x $i = $result"
done

