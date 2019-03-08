//Farenheit to kelvin
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *F;
    int *Kelv;
    F = (int *)malloc(sizeof(int));
    Kelv = (int *)malloc(sizeof(F));
    printf("Put in temperature: ");
    scanf("%d",F);
    *Kelv =(*F - 32)*5/9 + 273.15;
    printf("%d",*Kelv);
}