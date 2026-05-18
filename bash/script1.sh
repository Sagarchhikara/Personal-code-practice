#!/bin/bash
sagar=19
echo "My name is sagar and my age is $sagar" 
# Enviornment variable in lunx
echo "Your path is $PATH"
echo "Your home is $HOME"
echo "Your shell is $SHELL"
echo "Your user is $USER"
# defining a local variable
myfunc(){
	local name="sagar"
	echo "My name is $name"
}
myfunc
# Common variable Operations 
