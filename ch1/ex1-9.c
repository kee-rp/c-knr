/*  Exercise 1-9:
 *  Write a program to copy its input to its output, replacing each string of
 *  one or more blanks by a single blank.
 */

#include <stdio.h>

int main (void)
{
    int prev, c;

    prev = 0; // default value

    while ((c = getchar()) != EOF) {
        if (prev == ' ' && c == ' ') {

        } else {
            putchar(c);
        }

        prev = c;
    }

    return 0;
}