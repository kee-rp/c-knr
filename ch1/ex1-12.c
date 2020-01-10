/*  Exercise 1-12:
 *  Write a program that prints its input one word per line.
 */

#include <stdio.h>

#define EMPTY 0
#define NOTEMPTY 1

int main (void) 
{
    int c, state;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == NOTEMPTY) {
                state = EMPTY;
                printf("\n");
            }
        } else {
            state = NOTEMPTY;
            putchar(c);
        }
    }

    return 0;
}