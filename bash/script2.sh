#!/bin/bash
echo 'Enter your name:'
read  student_name
echo "Hello,$student_name!"
echo "Today: $(date+%A)"
echo "Files: $(ls|wc -l) files in current directory"

echo "Script name: $0"
echo "Hello, $1!"
echo "You are $2 years old."
echo "Department: $3"
echo "Total arguments given: $#"
echo "All arguments: $@"
