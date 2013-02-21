#!/bin/bash

# Check whether cin, cout, and asserts are used in reasonable quantities..
python count.py

# Do other tests
g++ -g -Wall main.cpp -o main.out
main.out < in1.txt > out1.txt
main.out < in2.txt > out2.txt
main.out < in3.txt > out3.txt
main.out < in4.txt > out4.txt
diff -s out1.txt reference_out1.html
cmp out1.txt reference_out1.html
diff -s out2.txt reference_out2.txt
cmp out2.txt reference_out2.txt
diff -s out3.txt reference_out3.txt
cmp out3.txt reference_out3.txt
diff -s out4.txt reference_out4.txt
cmp out4.txt reference_out4.txt

