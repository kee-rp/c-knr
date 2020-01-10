/*  Exercise 1-13:
 *  Write a program to print a histogram of the lengths of words in its input.
 *  It is easy to draw the histogram with the bars horizontal; a vertical
 *  orientation is more challenging.
 */

#include <stdio.h>

#define MAX_WORD_LENGTH 50

int main (void) 
{
    int c, i, j, wordLength, nwhite;

    int nlength[50];

    // Initialize values

    nwhite = 0;

    for (i = 0; i < MAX_WORD_LENGTH; i++) {
        nlength[i] = 0;
    }

    // Retrive lengths of each word
    printf("Enter words. "
        "Note that only words with less than 50 characters are accepted.\n");

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            nwhite++;

            if (wordLength != 0) {
                nlength[wordLength - 1]++;
            }

            wordLength = 0;
        }
        else {
            wordLength++;
        }
    }

    // Print the output

    printf("HISTOGRAM OF THE LENGTHS OF WORDS IN THE INPUT\n");

    for (i = 0; i < MAX_WORD_LENGTH; i++) {
        printf("%2d: ", i + 1);
        
        for (j = 0; j < nlength[i]; j++) {
            printf("*");
        }

        printf("\n");
    }    

    printf("\n");
    printf("Number of whitespaces: %d\n", nwhite);

    return 0;
}