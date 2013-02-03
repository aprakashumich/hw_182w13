#include <iostream>
#include <string>
#include <stdlib.h>
#include <assert.h>
#include <sstream>
#include "main_sample.h"
using namespace std;

// Your names: 

/**
   Main function. It does ....
 */

int main() 
{
    return 0;
}


/********************************************/

/* You must use the following functions for constructing your 
HTML output and producing error messages. */


/**
 Parameters: None
 Returns: None
 Effects: 
 This function prints out the beginning part of HTML output.
**/
void print_html_header() {
    cout << "<html>\n<body>\n"; 
}


/**
 Parameters: description of the item and value
 Returns: Nothing
 Effects: 
 This function prints out a description and value in the form
 <p>description: value</p>
**/
void print_html_stringitem(string description, string value) {
    // Example call: print_html_item("Student Name", "John Doe");
    cout << "<p>" << description << ": " << value << "</p>" << endl;
}


/**
 Parameters: None
 Returns: None
 Effects: 
 This function prints out the trailing part of HTML output.
**/
void print_html_footer() {
    cout << "</body>\n</html>\n";
}

/**
 exit_on_error prints out an error message that is specific to an error number and then exits from the program. The valid error numbers are:
1: it means a negative score was encountered
2: it means the sum of scores exceeds 100
3: it means that the input was bad in some way.

   INPUTS: errornum, the error number
   RETURN VALUE: None
 **/

void exit_on_error(int errornum) {
    /* Note: switch statements are like if...then...else statements
       but you can only branch on numeric values or characters */ 
    switch(errornum) 
    {
        case 1:      
            cout << "Error: negative score found." << endl;
            break;
        case 2:      
            cout << "Error: total score exceeds 100." << endl;
            break;
        case 3:
            cout << "Error: bad input." << endl;
            break;
        default:
            cout << "Bad error code :" << errornum << endl;
    }
    exit(errornum);
}

/****************************************************/

/* The following are optional to use. You can come up with your
   own design. These functions are incomplete. 
*/

/**
   computes the letter grade from total score.
   INPUTS: totalscore, the student's total score
   RETURNS: the letter grade, "A", "B", "C", "D", or "E"
**/

string computegrade(int totalscore)
{
    return "";
}


/**
   computes the letter grade from total score.
   INPUTS: totalscore, the student's total score
   RETURNS: the letter grade, "A", "B", "C", "D", or "E"
**/

void test_computegrade()
{
    assert(computegrade(90) == "A");
    assert(computegrade(85) == "B");
}

/**
   Reads the student score from standard input.
   RETURNS: the score that is read as an integer value.
   (Revise the comment to match what the function actually does)
   
 **/

int readscore()
{
    return 0;
}
