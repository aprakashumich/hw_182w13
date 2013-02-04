#!/bin/sh
echo "This test checks your output and format on two tests, one for days.cpp"
echo "and one for stats.py"
echo "This is NOT a complete test, but it should help you avoid errors"
echo "with tabbing, spacing, etc."

g++ -g -Wall days.cpp -o days.out
days.out < in7.txt > studentout7.txt
echo "Comparing studentout7.txt and professor output out7.txt"
diff -s studentout7.txt out7.txt

python stats.py < pin2.txt > student_pout2.txt
echo "Comparing student_pout2.txt and professor output pout2.txt"
diff -s student_pout2.txt pout2.txt


