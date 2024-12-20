#include <stdio.h>

int main(void) 
{
    
    int item_number;
    float unit_price;
    int month, day, year;

    printf("Enter item number: ");
    fflush(stdout);
    scanf("%d", &item_number);

    printf("Enter unit price: ");
    fflush(stdout);
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    fflush(stdout);
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
    printf("%d\t$%.2f\t%02d/%02d/%4d", item_number, unit_price, month, day, year);

    return 0;
}