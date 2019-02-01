#include <stdio.h>

int main(void)
{
    int intInteger = 108;
    float fltFloat = 8.5;
    double dblDouble = 1.6;
    char charExclemation = '!';

    printf("This Integer %d is now a Float!: %f\n", intInteger, (float) intInteger);
    printf("This Integer %d is now a Character!: %c\n", intInteger, (char) intInteger);
    printf("This Float %f is now a Double!: %lf \n", fltFloat, (double) fltFloat);
    printf("This Double %lf is now a float!: %f\n", dblDouble, (float) dblDouble);
    printf("This Char %c is now an Integer!: %d\n", charExclemation, (int) charExclemation);
    printf("The number 33 is actually %c", (char)33);

    return 0;
}