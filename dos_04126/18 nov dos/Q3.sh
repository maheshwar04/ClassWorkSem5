#!/bin/bash
echo "Enter a number"
read number
fact=1
for ((i=1; i<=number; i++));
do
	fact=$((fact*i))
done
echo "The factorial of the number is $fact"
