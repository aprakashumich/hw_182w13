#!/bin/sh
g++ -g -Wall days.cpp -o days.out
echo "Testing: Input file: in1.txt, reference output file: out1.txt"
days.out < in7.txt | sed s/weeks/week/g | sed s/days/day/g | sed s/years/year/g > studentout7.txt
cat out7.txt | sed s/weeks/week/g | sed s/days/day/g | sed s/years/year/g  > out7_s.txt
echo ""
echo "comparison ignores plurals and singular words (e.g., day vs. days)"
echo "Comparing studentout7.txt and professor output out7_s.txt"
diff -s studentout7.txt out7_s.txt
cmpstudentout7.txt out7_s.txt

echo ""
echo "Another test. Input file: in1.txt, reference output file: out1.txt"
days.out < in1.txt | sed s/weeks/week/g | sed s/days/day/g | sed s/years/year/g > studentout1.txt
cat out1.txt | sed s/weeks/week/g | sed s/days/day/g | sed s/years/year/g  > out1_s.txt
echo ""
echo "comparison ignores plurals and singular words (e.g., day vs. days)"
echo "Comparing studentout1.txt and professor output out1_s.txt"
diff -s studentout1.txt out1_s.txt
cmp studentout1.txt out1_s.txt

echo ""
python stats.py < pin2.txt > student_pout2.txt
echo "Comparing student_pout2.txt and professor output pout2.txt"
diff -s student_pout2.txt pout2.txt
cmp student_pout2.txt pout2.txt


