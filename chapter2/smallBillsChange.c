#include <stdio.h>

int main(void) 
{
    int changeDue;

    int twenties;
    int tens;
    int fives;
    int ones;

    printf("Enter a whole dollar amount: ");
    fflush(stdout);
    scanf("%d", &changeDue);
    printf("\n");
    
    twenties = changeDue / 20;
    changeDue = changeDue % 20;

    tens = changeDue / 10;
    changeDue = changeDue % 10;

    fives = changeDue / 5;
    changeDue = changeDue % 5;

    ones = changeDue / 1;
    changeDue = changeDue % 1;

    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf(" $5 bills: %d\n", fives);
    printf(" $1 bills: %d\n", ones);

    return 0;
}