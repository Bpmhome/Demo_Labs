
#include <stdio.h>

int main()
{
    char Input = 0;
    printf("Please enter a character: ");
    Input = getc(stdin);
    printf("Here is this!: ");
    putc(Input -1, stdout);

    return 0;
}