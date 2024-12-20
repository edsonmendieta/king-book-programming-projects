#include <stdio.h>

int area_code, first_three_digits, last_four_digits;

int main(void) 
{

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    fflush(stdout);
    scanf("(%d)%d-%d", &area_code, &first_three_digits, &last_four_digits);

    printf("You entered %d.%d.%d", area_code, first_three_digits, last_four_digits);

    return 0;
}