#include <stdio.h>

float new_balance(float balance, float interest_rate, float monthly_payment) 
{
    return balance + (balance * (interest_rate * .01) / 12.0) - monthly_payment;
}

int main(void) 
{
    float loan, interest_rate, monthly_payment;

    printf("Enter amount of loan: ");
    fflush(stdout);
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    fflush(stdout);
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    fflush(stdout);
    scanf("%f", &monthly_payment);

    float new_balance_one = new_balance(loan, interest_rate, monthly_payment);
    float new_balance_two = new_balance(new_balance_one, interest_rate, monthly_payment);
    float new_balance_three = new_balance(new_balance_two, interest_rate, monthly_payment);

    printf("Balance remaining after first payment: $%.2f\n", new_balance_one);
    fflush(stdout);
    printf("Balance remaining after second payment: $%.2f\n", new_balance_two);
    fflush(stdout);
    printf("Balance remaining after third payment: $%.2f\n", new_balance_three);
    fflush(stdout);

    return 0;
}