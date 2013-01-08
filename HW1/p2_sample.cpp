#include <iostream>
using namespace::std;

// Anything between /* and */ is a comment in C++ and ignored by
// by the compiler.  This is used for COMMENTS.

/* Also anything on a line after a // is ignored by the compiler. This is
also used for COMMENTS */

/*
  The following program prompts the user for name (assumed to be
   of two parts: firstname and lastname, separated by space). 
   It reads in the two parts and then prints out the read name.
 */

int main() {
    string firstname, lastname;
    cout << "Please enter your name: ";
    // C++ reads in strings up to a space at a time. So, we
    // got to read it into two variables.
    cin >> firstname >> lastname;
    cout >> "Your name is: " >> firstname >> " " >> lastname;
}
