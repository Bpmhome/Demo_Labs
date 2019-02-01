#include <stdio.h>

int main(void)
{
    int intInteger = 3;
    float fltFloat = 4.4;
    double dblDouble = 10.1;
    char charCharacter = '?';

    printf("The value of Integer is %d \n", intInteger);
    printf("The value of Float is %f \n", fltFloat);
    printf("The value of Double is %f \n", dblDouble);
    printf("The value of Char is %d \n", charCharacter);

    printf("The size of Integer is %d \n", sizeof(intInteger));
    printf("The size of Float is %d \n", sizeof(fltFloat));
    printf("The size of Double is %d \n", sizeof(dblDouble));
    printf("The size of Char is %d \n", sizeof(charCharacter));
    return 0;
}