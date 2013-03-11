#include <string>
using namespace std;

/*  Write a loop to find the sum of all numbers between 0 and n
 *  Parameters: a number n, n >= 0.
 *  Returns: sum of numbers from 0 to n.
 *  E.g., sum1(3) should return 6. sum1(0) should return 0
 */

int sum1(int n);


/* Write a loop to find the sum of all numbers between 0 and n that are 
 * not divisible by m 
 * Parameters: a number n, n >= 0, a number m, m >= 1.
 * Returns: sum of numbers from 0 to n that are not divisible by m.
 * E.g., sum2(3, 1) returns 0. sum2(4, 2) return 4, sum2(4,3) returns 7.
*/
int sum2(int n, int m);



/* Write a recursive function to find the sum of all numbers between 0
 * and n that are not divisible by m.
 *  Parameters: a number n, n >= 0, a
 * number m, m >= 1.  
 * Returns: sum of numbers from 0 to n that are not
 * divisible by m.  E.g., sum2_recursive(3, 1) returns
 * 0. sum2_recursive(4, 2) return 4, sum2_recursive(4,3) returns 7.
 */
int sum2_recursive(int n, int m);



// Parameters: integer n > 0
// Returns: nothing
// Outputs: prints a lef-justified right triangle (no spaces at the end of 
// a line) with n lines with 1 star to n stars.
//  Example: print_left_triangle(3) outputs
//*
//**
//***

void print_left_triangle(int n);


// Parameters: integer n > 0, the size of the triangle
// Modifies: nothing
// Output: prints a right triangle with the *'s right justified.
// Note: no spaces at the end of lines
// Example: if n is 3, the output is the following:
//  *
// **
//***
void print_right_triangle(int n);



// Parameters: A string array A of size n, where n >= 1.
// Modifies: Array A is modified as follows. The array elements are reversed.
// Returns: nothing
// Example:
// Let's say A contains ["abc", "def", "g"];
// reversearray(A, 3) should result in A becoming ["g", "def", "abc"].
// Note: arrays are automatically passed by reference.

void reversearray(string A[], int n);



// Parameters: An array of integer values of size n, where n >= 1.
// Returns: nothing
// Outputs: A bar chart, with one row of stars per array element. If an array
// element has a value 5, show 5 stars for that line. Each line has the format:
// <linenum><Colon><Space><stars><newline>
// E.g., for an  array with content [5, 5, 2, 3, 0,1], printBarChart(A,6)
// prints the following (first line with the words "BAR CHART" and the
// last line with the words "END" is also important):

//BAR CHART
//0: *****
//1: *****
//2: **
//3: ***
//4: 
//5: ******      
//END

// Note: On the line with 4, there is exactly one space after the colon on 
// the line. There should not be any extra spaces at the end of the lines or at 
// the beginning of the lines.

void printBarChart(int A[], int n);

// Note: The above is equivalent to
// void printBarChart(int *A, int n);




// Parameters: A two dimensional array of Boolean values representing
// positions of queens on a chessboard of size 8x8. For example, if A[3][4]
// is true, then a queen is present in position [3][4], otherwise not.
// Returns: true if there exist any two queens that can attack each other.
// Otherwise, it returns false. Two queens can attack each other if they
// are in the same row, same column, or on the same diagonal.
// Modifies: The function also modifies a reference parameter m. The value
// m should contain the total number of queens on the chessboard.
// A two dimensional array element can be reference by A[row][col].

bool queenattacktest(bool chessboard[8][8], int &m);






/* Input Parameters: A two dimensional array A of double values with n
   rows and 2 columns.  

   Returns: nothing via the return value 

   Modifies: Two reference parameters rowsum and colsum, both
   arrays. rowsum should contain the sum of elements in each row of
   A. It will be of size n.  colsum should end up containing the sum
   of elements in each column of A.  It will be an array of size 2.
*/

void addrowsandcolumns(double A[][2], int n, double rowsum[], double colsum[]);



