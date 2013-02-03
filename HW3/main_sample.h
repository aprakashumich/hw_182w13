#include <string>
using namespace std;

/* 
   Add all function signatures to this file.  You may
  also add comments that describe the functions. You should have
  comments for each function either in main.cpp or main.h or in
  both places
*/

void print_html_header();
void print_html_stringitem(string description, string value);
void print_html_footer();
void exit_on_error(int errornum);

// A sample function that could be useful. You will need to add more.
string computegrade(int totalscore);
void test_computegrade();
