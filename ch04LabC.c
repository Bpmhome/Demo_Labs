#include <stdio.h>

int main()
{
    char Input [10];
    printf("Enter something!: ");
    fgets(Input, sizeof(Input), stdin);
    printf("Here is what you gave me!: ");
    fputs(Input, stdout);

    return 0;
}