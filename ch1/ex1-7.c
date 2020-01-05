/*  Exercise 1-7:
 *  Write a program to print the value of EOF.
 */

#include <stdio.h>

int main(void)
{
    int c;

    while (1) {
        if ((c = getchar()) == EOF) {
            printf("EOF: %d\n", c);
            break;
        }
    } 

    return 0;
}