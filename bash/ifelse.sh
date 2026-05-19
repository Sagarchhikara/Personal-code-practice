#!/bin/bash
# if else statement in bash
age=18
if [ $age -ge 18 ]; then
	echo "You are an adult."
fi
age1=16
if [ $age1 -ge 18 ]; then
	echo "You are an adult."
else
	echo "You are a minor."
fi

# For loops
for i in {1..5}; do
	echo "Number: $i"
done
# While loops
count=1
while [ $count -le 5 ]; do
	echo "Count: $count"
	((count++))
done

# Until loops
count=10
until [ $count -le 5 ]; do
	echo "Count: $count"
	((count--))
done

# bash functions 
