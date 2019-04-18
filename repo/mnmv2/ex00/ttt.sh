#!/bin/sh

./aaa "baaabab" "ba*****ab"         #1
./aaa "baaabab" "ba*ab"             #1
./aaa "baaabab" "a*ab"              #0
./aaa "baaabab" "a*****ab"          #0
./aaa "baaabab" "*a*****ab"         #1
./aaa "baaabab" "ba*ab****"         #1
./aaa "baaabab" "****"              #1
./aaa "baaabab" "*"                 #1
./aaa "baaabab" "b*b"               #1
./aaa "baaabab" "a*a"               #0
./aaa "baaabab" "baaabab"           #1
./aaa "baaabab" "*baaaba*"          #1
