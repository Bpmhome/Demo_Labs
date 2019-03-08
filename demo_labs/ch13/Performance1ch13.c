#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <malloc.h>

int main()
{
    //TODO: Create a string containing your first name
    char *FirstName[] = {"Kurtis"};
    //TODO: Get the size of this string

    //TODO: Declare a char pointer *str
    char *str = (char*)malloc(40 * sizeof(char));

    //TODO: Allocate a section of memory of type char
    //TODO: Set the size of this allocated space to 40 bytes
    //TODO: Asign the address of this allocated space to the pointer value
        strcpy(str, *FirstName);

    //TODO: Copy your name into the allocated space using strcpy()
        printf("%s\n", str);
    //TODO: Print out your name that is stored in the allocated memory space
        str = (char*)realloc(str, sizeof(FirstName));
    //TODO: Reallocate the memory space using the size of the string rather than 40 bytes
        printf("%s", str);
    //TODO: Print out the string again
    free(str);
    str = NULL;
}