//char input[64]

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *input;
    int len;
    input = (char *)malloc(sizeof(char)*1024);
    if (input == NULL)
    {
        puts("Help");
        exit(1);
    }
    puts("Type stuff");
    fgets(input,1023,stdin);
    puts("Your wrote: ");
    printf("\"%s\"\n",input);
    //_______________________________________________________
    len = strlen(input);
    if(realloc(input, sizeof(char)*(len +1)) == NULL);
    {
        puts("Unable to reallocate buffer");
        exit(1);
    }

    puts("Memory Reallocated");
    puts("You wrote: ");
    printf("\"%s\"\n",input);
    return(0);
}