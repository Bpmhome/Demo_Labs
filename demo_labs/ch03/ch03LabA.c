#include <stdio.h>

int main(void)
{
    int intArray [15] = {0};
    char charArray [9] = {"HELP\0"};
    intArray [0] = 29;
    intArray [1] = 21;
    intArray [2] = 21;
    intArray [3] = 21;
    intArray [4] = 21;
    intArray [5] = 26;
    intArray [6] = 20;
    intArray [7] = 19;
    intArray [8] = 40;
    intArray [9] = 37;
    intArray [10] = 21;
    intArray [11] = 85;
    intArray [12] = 32;
    intArray [13] = 21;
    intArray [14] = 25;
    intArray [15] = 23;
    printf("The Age of the instructor:%d\n", intArray[0]);
    for (int i = 1; i < 15; i++)
    {
    printf("The Age of the students:%d\n", intArray[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%c\n", charArray[i]);
    }
    return 0;
}