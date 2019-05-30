#!/bin/bash

echo -e "Content-type: text/html\n\n"

echo "<h1>RPI Statuses</h1>"

for i in {01..20};
do
	if ping -c 1 "rpi$i" &> /dev/null;
	then
		echo "rpi$i: alive";
	else
		echo "rpi$i: dead";
	fi
	echo "<br>"
done
