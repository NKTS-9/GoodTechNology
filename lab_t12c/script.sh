#!/bin/bash
read user
read -t 4 pass
tpass=4
if [ $pass = $tpass ]
then
	./main.out
	./main.out > hello
else
	cat ./text2.txt
fi
