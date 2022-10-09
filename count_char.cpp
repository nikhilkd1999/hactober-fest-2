#include "Count_char_number_spaces.h"
#include <iostream>
using namespace std;
void a()
{
    /*
    Write a program to count and print the total number of characters (lowercase english alphabets only), digits (0 to 9) and white spaces (single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.
That is, input will be a stream of characters and you need to consider all the characters which are entered till '$'.
Print count of characters, count of digits and count of white spaces respectively (separated by space).
    */
    char c;
    c = cin.get();

    int digit_count = 0;
    int alpha_count = 0;
    int space_count = 0;

    while (c != '$')
    {
        if (c >= 'a' && c <= 'z')
        {
            alpha_count++;
        }
        else if (c <= '9' && c >= '0')
        {
            digit_count++;
        }
        else if (c == ' ' || c == '\t' || c == '\n')
        {
            space_count++;
        }
        c = cin.get();
    }

    cout << alpha_count << " " << digit_count << " " << space_count;
    return 1;
    
}
