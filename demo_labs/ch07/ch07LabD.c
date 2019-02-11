//Kurtis Mclain
//Switch/Case that is functionally a calculator
//02-07-2019
#include <stdio.h>
#include <math.h>

int main()
{
    int FirstInput = 0;
    int SecondInput = 0;
    char Operator;
    printf("Enter your two integers seperated by your arithmetic operator: ");
    scanf("%.2i %c%.2i",&FirstInput,&Operator,&SecondInput);

    //Takes the variable
    switch (Operator)
    {//Constant conditional which effectively dictates the outcome or pushes it down the chain
        case ('+'):
            printf("%lf%c%lf=%.2lf",(double)FirstInput,Operator,(double)SecondInput,((double)FirstInput+SecondInput));
            break;
        case ('-'):
            printf("%lf%c%lf=%.2lf",(double)FirstInput,Operator,(double)SecondInput,((double)FirstInput-SecondInput));
            break;
        case ('*'):
            printf("%lf%c%lf=%.2lf",(double)FirstInput,Operator,(double)SecondInput,((double)FirstInput*SecondInput));
            break;
        case ('/'):
            printf("%lf%c%lf=%.2lf",(double)FirstInput,Operator,(double)SecondInput,((double)FirstInput/SecondInput));
            break;
        default:
            printf("Error");
            break;
    }
}