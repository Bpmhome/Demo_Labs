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
{
    
    int ReturnValue = 0;
    char StringArray[256] = {0};
    char ReversedStringArray[256] = {0};
    
    for (int i = 0; i < strlen(forwardString); i++)
    {
        StringArray[i] = forwardString[i];
        
    }
    int counter = strlen(forwardString) - 1;
    for (int i = 0; i < strlen(forwardString); i++)
    {
        ReversedStringArray[i] = StringArray[counter];
        counter --;
    }
    if (StringArray != NULL)
    {
        int strLen = strlen(forwardString);
        if (strLen <=0)
        {
            ReturnValue = -2;
        }
        else
        {
            printf("Reverse of the string is\n%s\nSize of the string is\n%i\n", ReversedStringArray, strlen(forwardString));
        }
    }
    else
    {
        ReturnValue = -1;
    }
    return ReturnValue;
    
}