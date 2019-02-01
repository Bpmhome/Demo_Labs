#include <stdio.h>


int main(void)
{
    int intArray [3] = {42, 85, 13};
    char charArray [5] = {35, 65 ,43, 77, 128};
    for (int i = 0; i < 3; i++)
    {
    printf("This # %d = %d \n", i + 1, intArray[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("This thing %d = %c\n", (int) charArray[i], charArray[i]);
    }
    return 0;
}