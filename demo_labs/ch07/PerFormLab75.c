//Kurtis Mclain
//02-11-2019
//Uses MOD to get first 10-20 positive integers that x is divisible by
//7.5
#include <stdio.h>

int main()
{
    int Input = 0;
    printf("Put either 1 for odds or 0 for evens");
    scanf("%i",&Input);
    if(Input == 0)
    {
        for(int i; i<51; i++)
        {
            printf("%i\n",Input);
            Input += 2;
        }
    }
    else if(Input == 1)
    {
        for(int i = 1; i<51; i++)
        {
            printf("%i\n",Input);
            Input += 2;
        }
    }
    else
    {
        main();
    }
}