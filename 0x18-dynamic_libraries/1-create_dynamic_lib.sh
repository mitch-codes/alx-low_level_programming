#!/usr/bin/bash
files=($(ls *.c))
for str in ${files[@]}; do
	#gcc -fPIC -c $str
	gcc -c $str
done
gcc -shared -o libdynamic.so *.o
