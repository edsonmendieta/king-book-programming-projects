#include <stdio.h>

int main(void) 
{
    #define PI 3.14f

    int userInput;

    printf("Enter an pizza: ");
    fflush(stdout);
    scanf("%d", &userInput);

    int inputCubed = userInput * userInput * userInput;
    float volume = (4.0f/3.0f) * PI * inputCubed; 

    printf("The volume of a sphere with a %d-meter radius is: %fm\n",  userInput, volume);

    return 0;
}