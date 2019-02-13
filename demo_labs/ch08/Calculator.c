#include <stdio.h>
#include <math.h>
int add(int Num1, int Num2);
int subtract(int Num1, int Num2);
int multiply(int Num1, int Num2);
int divide(int Num1, int Num2);

int main()
{
    int intFirstNum = 0;
    int intSecondNum = 0;
    char charOperator = 'a';
    char charCont = 'a';
    beginning:
    printf("Please enter your maths(Ex. 1+1,4/2): ");
    scanf("%i%c%i",&intFirstNum,&charOperator,&intSecondNum);
    switch(charOperator)
    {
        case '+':
        add(intFirstNum,intSecondNum);
        break;
        case '-':
        subtract(intFirstNum,intSecondNum);
        break;
        case '*':
        multiply(intFirstNum,intSecondNum);
        break;
        case '/':
        divide(intFirstNum,intSecondNum);
        break;
    }
    printf("Continue?(Y/N)");
    getchar();
    scanf("%c",&charCont);
    if(charCont == 'Y')
    {
    goto beginning;
    }
    return 0;
    



}

int add(int Num1, int Num2)
{
    printf("%i+%i=%i\n",Num1,Num2,Num1+Num2);
    return 0;
}
int subtract(int Num1, int Num2)
{
    printf("%i-%i=%i\n",Num1,Num2,Num1-Num2);
}
int multiply(int Num1, int Num2)
{
    printf("%i*%i=%i\n",Num1,Num2,Num1*Num2);
}
int divide(int Num1, int Num2)
{
    printf("%i/%i=%i\n",Num1,Num2,Num1/Num2);
}