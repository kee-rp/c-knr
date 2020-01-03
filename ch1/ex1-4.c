/*  Exercise 1-4:
 *  Write a program to print the corresponding Celsius to Fahrenheit table.
 */

#include <stdio.h>

int main(void)
{
    float fahr, celsius;
    int lower, upper, step;

    // Print a header
    printf("CELSIUS  FAHRENHEIT\n");
    printf("-------------------\n");

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;

    while (celsius <= upper) {
        fahr = celsius * (9.0 / 5.0) + 32.0;
        printf("%6.0f %11.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}