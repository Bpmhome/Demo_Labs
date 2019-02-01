#include <stdio.h>

int main()
{
    char charPhrase [256] = {0};
    charPhrase = "All around me are familiar faces.Worn out places, worn out faces.\0";

    for (int i = 0; i < sizeof(charPhrase); i++)
    {
        printf("%c", charPhrase);
    }
    return 0;
}