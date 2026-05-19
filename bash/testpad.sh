#!/bin/bash
read str1
read str2

if [ "$str1" = "$str2" ]; then
    echo "EQUAL"
else
    echo "NOT EQUAL"
fi
# Q2
read input
if [ -f "$input" ] ; then 
    echo "Exists"
else 
    echo "Not Exists"
fi
#Q3
read no1
read no2
read no3
sum=$((no1 + no2 + no3))
echo "$sum"

