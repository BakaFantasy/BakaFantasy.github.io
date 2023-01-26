#!/usr/bin/env bash

i=0

while true ; do
	i++
	bash src_2.3.sh &> tmp
	if [[ "$?" -ne 0 ]] ; then
		break
	fi
done
	echo "$i runs were token."
cat tmp
