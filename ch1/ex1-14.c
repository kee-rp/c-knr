/*  Exercise 1-14:
 *  Write a program to print a histogram of the frequencies of different
 *  characters in its input.
 */

#include <stdio.h>

#define NUM_CHARS 26

int main (void)
{
    // Initialize values

    int c, i, j, nwhite, nother;

    int characters[NUM_CHARS];

    nwhite = nother = 0;

    for (i = 0; i < NUM_CHARS; i++) {
        characters[i] = 0;
    }

    // Store frequencies of each characters

    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z') {
            characters[c - 'a']++;
        }
        else if (c == ' ' || c == '\t' || c == '\n') {
            nwhite++;
        }
        else {
            nother++;
        }
    }

    // Print the histogram

    printf("\n");
    printf("HISTOGRAM OF THE FREQUENCIES OF DIFFERENT CHARACTERS\n");

    for (i = 0; i < NUM_CHARS; i++) {
        printf("%c: ", i + 'a');

        for (j = 0; j < characters[i]; j++) {
            printf("*");
        }

        printf("\n");
    }

    printf("\n");
    printf("Number of whitespaces: %d\n", nwhite);
    printf("Other characters: %d\n", nother);

    return 0;
}