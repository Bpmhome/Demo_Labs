#include <stdio.h>

int main()
{
    FILE *pFile;
    char Input(81);
    pFile = fopen("C/home/student/Downloads/class/demo_labs/Text.txt","r");

    if (pFile != NULL)
    {
        //Process file
        While(!feof(pFile));
        {
            fgets(Input, 81, pFile);
            printf("%s, Input");
        }
        fclose(pFile);
    }
    else
    {
        //IO Error
        print("IO error: Problem with file.");
    }
    return 0;
}