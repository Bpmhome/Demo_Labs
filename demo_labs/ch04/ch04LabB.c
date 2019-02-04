#include <stdio.h>

int main()
{
    char Input [10] = {0};
    printf("Please enter a character: ");
    getc(Input, sizeof(Input), stdin);
    printf("Here is this!: ");
    putc(Input -1, stdout);

    return 0;
}