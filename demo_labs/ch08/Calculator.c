//Kurtis MClain
//2/11/2019
#include <stdio.h>
#include <math.h>
//initializing the functions
int add(int Num1, int Num2);
int subtract(int Num1, int Num2);
int multiply(int Num1, int Num2);
int divide(int Num1, int Num2);

int main()
{
    //declaring my variables and assigning value.
    int intFirstNum = 0;
    int intSecondNum = 0;
    char charOperator = 'a';
    char charCont = 'a';
    //Location for my later placed "goto"
    beginning:
    //print and scan to display conditons and accept/locate values
    printf("Please enter your maths(Ex. 1+1,4/2): ");
    scanf("%i%c%i",&intFirstNum,&charOperator,&intSecondNum);
    switch(charOperator)
    {//switch case using the Operator input to play the correct funtion
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
    //printf to ask the user if they would like to continue and then place a conditon to allow this
    printf("Continue?(Y/N)");
    //getchar mostly just works as a pause
    getchar();
    //scanf takes the input from the user to be used appropriately
    scanf("%c",&charCont);
    if(charCont == 'Y')
    {//if statement which if met sends the program back to the "beginning"
    goto beginning;
    }
    return 0;
    



}

int add(int Num1, int Num2)
{//simple functon to display the answer based off of what the user inputs
    printf("%i+%i=%i\n",Num1,Num2,Num1+Num2);
    return 0;
}
int subtract(int Num1, int Num2)
{//simple functon to display the answer based off of what the user inputs
    printf("%i-%i=%i\n",Num1,Num2,Num1-Num2);
}
int multiply(int Num1, int Num2)
{//simple functon to display the answer based off of what the user inputs
    printf("%i*%i=%i\n",Num1,Num2,Num1*Num2);
}
int divide(int Num1, int Num2)
{//simple functon to display the answer based off of what the user inputs
    printf("%i/%i=%i\n",Num1,Num2,Num1/Num2);
}