//Kurtis Mclain
//Checks if an assigned int in positive or negative using bitwise and then converts and displays as binary
//02-07-2019
#include <stdio.h>
#include <inttypes.h>

int main()
{
    signed int Input = 0;
    int Counter = 0;
    uint32_t bitChecker = 1;
    printf("Input a number: ");
    scanf("%i", &Input);
    if(((unsigned int)Input >> 31) == 1)
    {
        printf("Negative\n");
        bitChecker = bitChecker << 31;
     while(bitChecker > 0)
    {
        if(Counter % 4 == 0)
        {
            printf(" ");
        }
        if((bitChecker & Input) == 0 )
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
        bitChecker = bitChecker >> 1;
    }
    }
    
    else
    {
        printf("Positive\n");
        bitChecker = bitChecker << 31;
     while(bitChecker > 0)
    {
        if(Counter % 4 == 0)
        {
            printf(" ");
        }
        if((bitChecker & Input) == 0 )
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
        bitChecker = bitChecker >> 1;
    }
    }
    
}