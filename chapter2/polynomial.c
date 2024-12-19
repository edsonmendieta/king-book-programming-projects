#include <stdio.h>

#define POLY "((3*x)^5 + (2*x)^4 - (5*x)^3 - x^2 + (7*x) - 6)"

int main(void)
{
    int inputValue;

    printf("Enter an integer value as input value\nfor a polynomial equation: ");
    fflush(stdout);
    scanf("%d", &inputValue);

    printf("\nThe value of the polynomial\n%s\nwhen the x value is %d is: %d\n", POLY, inputValue, ((3 * (inputValue * inputValue * inputValue * inputValue *inputValue)) + 
    (2 * (inputValue * inputValue * inputValue * inputValue)) - 
    (5 * (inputValue * inputValue * inputValue)) - (inputValue * inputValue) + 
    (7 * inputValue) - 6));

    return 0;
}