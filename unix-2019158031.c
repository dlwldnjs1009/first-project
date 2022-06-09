#!/bin/bash
if ! [ -e ~/.junk ]
then
mkdir ~/.junk
fi
if [ $# -eq 1 ]
then
	if [ $1 = "-l" ]
		then ls -l ~/.junk
	elif [ $1 = "-a" ]
		then ls -a ~/.junk
	elif [ $1 = "-F" ]
		then ls -F ~/.junk
	elif [ $1 = "-p" ]
		then 
		rm -rf ~/.junk/*
	     	rmdir ~/.junk
     	elif [ -e $1 ]
   		then mv $1 ~/.junk
	else	
		echo "$1 is an illegal option"
	fi
fi
if [ $# -ge 2 ]
then
	for mv_list in "$@"
	do
	mv $mv_list ~/.junk
	done
fi



