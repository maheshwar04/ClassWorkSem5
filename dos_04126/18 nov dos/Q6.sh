#!/bin/sh
if [ "$#" -eq 0 ]; then
  echo "Error: No numbers provided."
  exit 1
fi

c=0

for num in "$@"; do
  if [ $c -le $num ]
  then
    c=$num
  fi
done
