#include <stdio.h>

even(int Num[]);

int main()
{
    int ArrNum[10];

    for(int i = 0; i<10; i++)
    {
        printf("Please enter number %i out of 10\n",i);
        scanf("%i",&ArrNum[i]);
    }
    even(ArrNum);
    return 0;
}

even(int Num[])
{
    for(int i = 0;i<10;i++)
    {
        if(Num[i]%2==0)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}