#include <stdio.h>
int main()
{
    FILE *pFile;

    pFile = fopen("/home/student/Downloads/class/demo_labs/ch12/ClassRoster", "w");

    if (pFile != NULL)
    {
            char FirstName, MiddleName, LastName;
            printf("Please enter your First Middle and Last name:");
            scanf("%c*%c*%s",&FirstName, &MiddleName, &LastName);
            while (pFile != EOF)
            {
                if (FirstName == 'EOF')
                {break;}
                fprintf(pFile, "%c%c%s\n",&FirstName, &MiddleName, &LastName);
                printf("Please enter your First Middle and Last name or EOF to end: \n");
                scanf("%c*%c*%s",&FirstName, &MiddleName, &LastName);
                
            }
            fclose(pFile);
    }
    else
    {
        printf("Error");
    }
    return 0;
}