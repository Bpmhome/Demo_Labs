#include <stdio.h>

int main()
{
    int Input,Reverse = 0;
    printf("\nEnter a number:\n");
    scanf("%d",&Input);
    while(Input!=0)
    {
        Reverse = Reverse * 10;
        Reverse = Reverse + Input%10;
        Input = Input/10;
    }
    printf("%d", Reverse);
}