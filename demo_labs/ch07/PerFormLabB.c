//Kurtis Mclain
//Switch/Case that is functionally a calculator
//02-07-2019
//7.3B
#include <stdio.h>

int main()
{//Creating the variables and array
    char TheRay [] = {"Help\nMe\nPlease\0"};
    int Counter = 0;
    //puts(TheRay);
    //While loop to check for null and print with incrementing counter/positon
    while(TheRay[Counter] != NULL)
    {
        printf("%c",TheRay[Counter]);
        //if statement that checks for newline and then breaks the loop if reached
        if(TheRay[Counter] == '\n')
        {
            break;
        }
        Counter++;
    }
    
}