if [ "$2" == '' ]
then
	gcc -Wall -o "$1" "$1".c
else
	gcc -Wall -o "$1" "$1".c  "$shift".c
fi

./"$1"
