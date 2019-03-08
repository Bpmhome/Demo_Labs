#include <stdio.h>

int main()
{
    int num;
    FILE *fptr;
    fptr = fopen("C/home/student/Downloads/class/demo_labs/Hank", "r");
    num = fgetc(fptr);

    while (num != EOF)
    {
        putchar(num);
        num = fgetc(fptr);
    }
    fclose(fptr);
    return 0;
}