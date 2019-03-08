//p = (type *)malloc(size)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *age;

    age = (int *)malloc(sizeof(int)); 

    if (age == NULL)
    {
        puts("Unable to allocate memory");
        exit(1);
    }
    printf("How old are you?");
    scanf("%d",age);
    printf("You're %d years old.",*age);
    return(0);
}