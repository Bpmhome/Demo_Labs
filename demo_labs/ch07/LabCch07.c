//Kurtis Mclain
//Displays the bigger number and then adds as long as the total value would be 2 or higher
//02-07-2019
#include <stdio.h>
#include <math.h>

int main()
{
    unsigned int UintOne = 0;
    unsigned int UintTwo = 0;
    unsigned int UintThree = 0;

    printf("Put in two different numbers: ");
    scanf("%i%*c%i",&UintOne,&UintTwo);
    if(UintOne > UintTwo)
    {//Basic conditional statement which dictates the larger number
        UintThree = UintOne;
        printf("%i\n", UintThree);
    }
    else if(UintOne < UintTwo)
    {
        UintThree = UintTwo;
        printf("%i\n", UintThree);
    }
    else
    {
        printf("Error\n");
    }
    if (UintOne + UintTwo >= 2)
    {//Ask if the two numbers in question would be big enough to create the condition
        printf("%i + %i = %i",UintOne,UintTwo,(UintOne+UintTwo));
    }
}