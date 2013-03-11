#include "functions.h"

// We have given you incorrect code for some of the functions in functions.h,
// just to get you started.


int sum1(int n) {
    // Incorrect code. Needs to be corrected.
    return 0;
}


void addrowsandcolumns(double A[][2], int n, double rowsum[], double colsum[]) {

    // This is not correct code. Just a sampler. This code computes
    // the sum of all the entries in the array and puts that value
    // in both rowsum and colsum array. 

    double sum = 0;
    for (int i = 0; i < n; i++) {  // rows
        for (int j = 0; j < 2; j++) { // columns
            sum = sum + A[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        rowsum[i] = sum;
    }

    for (int i = 0; i < 2; i++) {
        colsum[i] = sum;
    }
    return;
}


