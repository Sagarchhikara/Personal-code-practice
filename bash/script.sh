#!/bin/bash

my_array=("apple" "banana" "cherry")
files=(
    "/etc/hosts"
    "/etc/passwd"
    "/var/log/syslog"
)
subject[0]="Linux"
subject[1]="Python"
subject[2]="Dsa"
echo "${my_array[@]}"
echo "${subject[@]}"
# @ means all indexs will be printed 

