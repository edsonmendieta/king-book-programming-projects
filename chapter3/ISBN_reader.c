#include <stdio.h>

int main(void) 
{

    int gsi, group_id, publisher_code, item_number, check_digit;

    printf("Enter ISBN : ");
    fflush(stdout);
    scanf("%d-%d-%d-%d-%d", &gsi, &group_id, &publisher_code, &item_number, &check_digit);

    printf("GSI prefix: %d\n", gsi);
    printf("Group identifier: %d\n", group_id);
    printf("Publisher code: %d\n", publisher_code);
    printf("Item number: %d\n", item_number);
    printf("Check digit: %d\n", check_digit);

    return 0;
}