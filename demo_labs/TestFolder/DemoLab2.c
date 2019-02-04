#include <stdio.h>

int main()
{
    int intDay = 0;
    int intMonth = 0;
    int intYear = 0;

    printf("Enter the day, month and year(<dd>-<mm>-<yyyy>):");
    scanf("%2d-%2d-%4d", &intDay, &intMonth, &intYear); //asterisk in this scenario means all.(e.x. %c%d*%c all numbers until a character.)
    printf("Here ya go:%02d/%02d/%d ", intDay, intMonth, intYear);

    return 0;
}