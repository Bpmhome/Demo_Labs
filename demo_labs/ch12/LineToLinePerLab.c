#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *InputFile, *OutputFile;
    char TempStorage [256] = {0};
    char StorageChar = TempStorage;

    InputFile = fopen("/home/student/Downloads/class/demo_labs/ch12/ClassRoster", "r");
    OutputFile = fopen("WriteFile", "w");

    if (InputFile != NULL)
    {
        while(InputFile)
        {
            StorageChar = fgets(TempStorage, 255, InputFile);
            if (InputFile)
            {
                fprintf(OutputFile,"%s",StorageChar);
            }
            else
            {
                break;
            }
        }
        fclose(InputFile);
        fclose(OutputFile);
    }
    else
    {
        printf("error");
        return -1;
    }
    return 0;
}