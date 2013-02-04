#!/bin/sh
set -x verbose
g++ -g -Wall days.cpp -o days.out
days.out < in7.txt | sed s/years/year/ > studentout7.txt
echo "Comparing studentout7.txt and professor output out7.txt"
diff -s studentout7.txt out7.txt

python stats.py < pin2.txt > student_pout2.txt
echo "Comparing student_pout2.txt and professor output pout2.txt"
diff -s student_pout2.txt pout2.txt


