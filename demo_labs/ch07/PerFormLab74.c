//Kurtis Mclain
//02-10-2019
//Uses MOD to get first 10-20 positive integers that x is divisible by
//7.4
#include <stdio.h>

int main()
{
    unsigned int x = 0;
    int counter = 0;
    int Value = 0;
    printf("Please enter a number: ");
    scanf("%d",&x);
    while(Value <= x && counter != 19)
    {
        if(x >999)
        {
            break;
        }
        if(Value == 0 || x % Value == 0)
        {
            if(Value == 0)
            {
                Value++;
                continue;
            }
        printf("%d is divisible by %d\n", x, Value);
        counter++;
        }
        else
            {
                Value++;   
                continue;
            }
            
        Value++;
    }
}
