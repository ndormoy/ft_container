#!/bin/bash

make > /dev/null

i=0
while ((i < 5));
do
	printf "\r◄ Loading[...]►" 
	sleep 0.5
	printf "\r↺ Loading[...]↻" 
	sleep 0.5
	printf "\r► Loading[...]◄" 
	sleep 0.5
	i+=1
done
echo -e "\n"

if (($# == 0)); then
	./ft_containers functions > ft_test.txt && ./std_containers functions > std_test.txt
	DIFF=$(diff ft_test.txt std_test.txt)
	if [ "$DIFF" == "" ]; then
		echo "FUNCTIONS :	✅👑"
	else
		echo "FUNCTIONS :	❌👀💣"
	fi
	sleep 1
	./ft_containers vector > ft_test.txt && ./std_containers vector > std_test.txt
	DIFF=$(diff ft_test.txt std_test.txt)
	if [ "$DIFF" == "" ]; then
		echo "VECTOR :	✅👑"
	else
		echo "VECTOR :	❌👀💣"
	fi
	sleep 1
	./ft_containers stack > ft_test.txt && ./std_containers stack > std_test.txt
	DIFF=$(diff ft_test.txt std_test.txt)
	if [ "$DIFF" == "" ]; then
		echo "STACK :		✅👑"
	else
		echo "STACK :		❌👀💣"
	fi
	sleep 1
	./ft_containers map > ft_test.txt && ./std_containers map > std_test.txt
	DIFF=$(diff ft_test.txt std_test.txt)
	if [ "$DIFF" == "" ]; then
		echo "MAP :		✅👑"
	else
		echo "MAP :		❌👀💣"
	fi
	sleep 1
	./ft_containers set > ft_test.txt && ./std_containers set > std_test.txt
	DIFF=$(diff ft_test.txt std_test.txt)
	if [ "$DIFF" == "" ]; then
		echo "SET :		✅👑"
	else
		echo "SET :		❌👀💣"
	fi
elif (($# > 1)); then
	echo "One argument expected\n"
	echo "Expected : ./test.sh <functions> <vector> <stack> <map> <set>"
else
	./ft_containers $1 > ft_test.txt && ./std_containers $1 > std_test.txt
	DIFF=$(diff ft_test.txt std_test.txt)
	if [ "$DIFF" == "" ]; then
		echo "$1 :			✅👑"
	else
		echo "$1 :			❌👀💣"
	fi
fi