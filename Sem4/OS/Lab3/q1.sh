#!/bin/sh

f=$1

if [ -f "$f" ] ; then
	echo "File exists" ;
elif [ -d "$f" ] ; then
	echo "Directory found" ;
else
	echo "NOT FOUND" ;
exit 1
fi

