#!/bin/bash

my_array=("apple" "banana" "cherry") # type 1 of array define 
files=(                              # type 2 of array define
    "/etc/hosts"
    "/etc/passwd"
    "/var/log/syslog"
)
#type 3 of array define 
subject[0]="Linux"
subject[1]="Python"
subject[2]="Dsa"
subject[10]="BE"
# explicit declarariion of array

echo "${my_array[@]}"
echo "${subject[@]}"
echo "${#files[@]}" # shows the number of elements in an array
# @ means all indexs will be printed 
