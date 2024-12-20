#include <stdio.h>

int main(void) 
{
    int month, day, year;

    printf("Enter a date (mm/dd/yyyy): \n");
    fflush(stdout);
    scanf("%2d/%2d/%4d", &month, &day, &year);

    printf("You entered the date %4d%02d%02d", year, month, day);

    return 0;
}
