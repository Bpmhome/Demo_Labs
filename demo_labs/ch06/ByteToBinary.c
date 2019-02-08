//Kurtis Mclain
//Converts to binary
//02-05-2019
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <inttypes.h>
  
int main()
{//unassigned integer values being allocated
    uint32_t UserInput = 0;
    uint32_t bitChecker = 1;
    int Counter = 0;
    printf("Please enter a number: ");
    fscanf(stdin, "%u", &UserInput);
    bitChecker = bitChecker << 31;
    //Pushing to the first bit
    while(bitChecker > 0)
    {
        if(Counter % 4 == 0)
        {
            printf(" ");
        }
        if((bitChecker & UserInput) == 0 )
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