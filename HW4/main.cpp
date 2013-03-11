#include "functions.h"
#include <assert.h>
#include <iostream>
using namespace std;

void test_sum1() {
    assert(sum1(4) == 10);
    assert(sum1(3) == 6);
    assert(sum1(0) ==



 0);
}



void test_addrowsandcolumns()
{
    // This creates an array IN with 3 rows and 2 columns. 
    double IN[3][2] = {{1.0, 2.0}, {2.0, 3.0}, {3.5, 4.5}};
    double rowsum[3];
    double colsum[2];
    addrowsandcolumns(IN, 3, rowsum, colsum);
    assert(colsum[0] == 6.5 && colsum[1] == 9.5);
    assert(rowsum[0] == 3.0 && rowsum[1] == 5.0 && rowsum[2] == 8.0);
}


int main() {
    test_sum1();
    test_addrowsandcolumns();
}


