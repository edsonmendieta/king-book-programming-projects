#include <stdio.h>

int main(void) 
{
    double tax = 0.05;
    double inputAmount;

    printf("Enter a monetary amount (dollars and cents): ");
    fflush(stdout);

    scanf("%lf", &inputAmount);
    printf("Input amount: %.2f\n", inputAmount);
    double finalBalance = inputAmount + (inputAmount * tax); 
    
    printf("After adding 5%% tax, the final balance is: %.2f", finalBalance);

    return 0;
}