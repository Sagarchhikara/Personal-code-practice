#!/bin/bash
# Student registration script
echo '============================================'
echo '
Student Registration Form
'
echo '============================================'
read -p 'Full Name: ' full_name
read -p 'Roll Number: ' roll
read -p 'Branch: ' branch
read -p 'Semester (1-8): ' sem
echo ''
echo '--- Registration Summary ---'
echo "Name
: $full_name"
echo "Roll No : $roll"
echo "Branch : $branch"
echo "Semester: $sem"
echo '----------------------------'

