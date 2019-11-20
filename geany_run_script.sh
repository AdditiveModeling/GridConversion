#!/bin/sh

rm $0

./Grid_Conversion

echo "

------------------
(program exited with code: $?)" 		


echo "Press return to continue"
#to be more compatible with shells like dash
dummy_var=""
read dummy_var
