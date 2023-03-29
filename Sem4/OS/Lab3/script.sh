#!/bin/bash
check_file(){

if [ -z "${1}" ] ;then
 echo "Please input something"
 return;
fi

f="${1}"
result="$(file $f)"
if [[ $result == *"cannot open"* ]] ;then
        echo "NO FILE FOUND ($result) ";
elif [[ $result == *"directory"* ]] ;then
        echo "DIRECTORY FOUND ($result) ";
else
        echo "FILE FOUND ($result) ";
fi

}

check_file "${1}"
