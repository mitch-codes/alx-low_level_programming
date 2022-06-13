#!/usr/bin/bash
files=($(ls *.c))
for str in ${files[@]}; do
	gcc -fPIC -c $str
	echo $str
done
