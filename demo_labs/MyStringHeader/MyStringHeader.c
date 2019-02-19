//Kurtis Mclain
//2/12/2019
//Reverses a string also base for MyStringHeader.h
#include <stdio.h>
#include <string.h>
#include"MyStringHeader.h"


    //Return Value
        //0 on success
        //-1 forwardString is NULL
        //-2 if strLen is zero or less
    //Parameters - A non-NULL terminated string and the length of that string
    //Purpose - Print a non-null terminated string backwards and then print a newline
        //Write a program that reads a string from user input, call reverse_it(), and then call print_the_count()
        //When satisfied, run "Unit Test Code 2.c"

extern int reverse_it(char * forwardString, int strLen)
{//declaring variables
    
    int ReturnValue = 0;
    char StringArray[256] = {0};
    char ReversedStringArray[256] = {0};
    
    for (int i = 0; i < strlen(forwardString); i++)
    {//for loop to  place the value within a new container
        StringArray[i] = forwardString[i];
        
    }
    int counter = strlen(forwardString) - 1;
    for (int i = 0; i < strlen(forwardString); i++)
    {//For loop placing the value within the container but essentially backwards
        ReversedStringArray[i] = StringArray[counter];
        counter --;
    }
    if (StringArray != NULL)
    {
        int strLen = strlen(forwardString);
        if (strLen <=0)//conditional statement which returns error values
        {
            ReturnValue = -2;
        }
        else
        {//Prints the string backwards
            printf("Reverse of the string is\n%s\nSize of the string is\n%i\n", ReversedStringArray, strlen(forwardString));
        }
    }
    else
    {
        ReturnValue = -1;
    }
    return ReturnValue;
    
}