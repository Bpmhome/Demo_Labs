//Kurtis Mclain
//02/20/2019
//This is a program designed as practice for preprocessors
//This has no real functionality
#include <stdio.h>
#include <stdlib.h>
///declaring and defining a LOT of MACROS preprocessors in general
#define _INC_STDIO
#define OPEN_MACRO 1
#define EOF 66
#define FOPEN_MAX 67
#define FILENAME_MAX 68
#define MAKE_STRING(x) #x //Stringify
#define PRINT_STRING printf("\n%s is %i", MAKE_STRING(OPEN_MACRO), OPEN_MACRO)//using MAKE_STRING to print the name and value of the macro

int main()
{
    #ifdef _INC_STDIO//if _INC_STDIO is defined it proceeds to call PRINT_STRING
    PRINT_STRING;
    #else
    #error ("Rip")//Recently learned I can do this and it prints for me (YAY!)
    #endif//ends
    #if EOF + 1 == FOPEN_MAX//Just an if with random conditoning just to play around
    printf("\nFOPEN_MAX");
    #endif
    #if FILENAME_MAX > FOPEN_MAX
    printf("\nWOW");
    #endif
    #if EOF != -1
    printf("\nI made EOF not equal to -1");
    #endif
    

    return 0;
}