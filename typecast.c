#include <stdio.h>

int main (void)
{
    //iterate from 65 to 90
    for (int i = 65; i <= 90; i++)
    {
        /**print the value of i twice
         * in the first, casting it as a CHARACTER, then printing it as a character
         * int the second, printing it directly as an integer
         **/
        printf("%c is %i\n", (char)i, i);
    }

    //iterate from 97 to 122
    for (int i = 97; i <= 122; i++)
    {
        /**print the value of i twice
         * in the first, casting it as a CHARACTER, then printing it as a character
         * int the second, printing it directly as an integer
         **/
        printf("%c is %i\n", (char)i, i);
    }

    //iterate from A to Z
    for (char c = 'A'; c <= 'Z'; c++)
    {
        /**print the value of i twice
         * in the first, printing it directly as an CHARACTER
         * int the second, casting it as a INTEGER, then printing it as a character
         **/
        printf ("%c is %i\n", c, c);
    }
}