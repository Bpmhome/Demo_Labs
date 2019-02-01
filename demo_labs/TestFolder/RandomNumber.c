#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int age[15] = {0};
    for (int i = 0; i < 15; i++)
    {
        age[i] = rand() % 40;
        if (age[i] < 18)
        {
            age[i] = 18;
        }
        printf("%d\n", age[i]);
    }
    return 0;
}