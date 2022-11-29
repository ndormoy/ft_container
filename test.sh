#!/bin/bash

echo  "    _  _         _                                                         _                          _                       "
echo  "   F L L]     ___FJ     ____     _ ___   _ _____      ____    _    _      FJ_      ____      ____    FJ_      ____     _ ___  "
echo  "  J   \| L   F __  L   F __ J   J \'__ \",J _  _ \`,   F __ J  J |  | L    J  _|    F __ J    F ___J  J  _|    F __ J   J '__ \","
echo  "  | |\\   |  | |--| |  | |--| |  | |__|-J| |_||_| |  | |--| | | |  | |    | |-'   | _____J  | '----_ | |-'   | _____J  | |__|-J"
echo  "  F L\\\\  J  F L__J J  F L__J J  F L  \`-'F L LJ J J  F L__J J F L__J J    F |__-. F L___--. )-____  LF |__-. F L___--. F L  \`-'"
echo  " J__L \\\\__LJ\____,__LJ\______/FJ__L    J__L LJ J__LJ\______/F)-____  L   \_____/J\______/FJ\______/F\_____/J\______/FJ__L     "
echo  " |__L  J__| J____,__F J______F |__L    |__L LJ J__| J______FJ\______/F   J_____F J______F  J______F J_____F J______F |__L     "
echo  "                                                             J______F                                                         "



echo -e "\n"
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