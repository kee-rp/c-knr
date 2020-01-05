/*  Exercise 1-8:
 *  Write a program to count blanks, tabs, and newlines.
 */

#include <stdio.h>

int main(void)
{
    int c, numBlanks, numTabs, numNewlines;

    numBlanks = 0;
    numTabs = 0;
    numNewlines = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ') {
            ++numBlanks;
        } else if (c == '\t') {
            ++numTabs;
        } else if (c == '\n') {
            ++numNewlines;
        }
    }

    printf("# of blanks: %d\n", numBlanks);
    printf("# of tabs: %d\n", numTabs);
    printf("# of newlines: %d\n", numNewlines);

    return 0;
}