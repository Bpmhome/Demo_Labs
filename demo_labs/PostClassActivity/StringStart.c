#include<stdio.h>

int main()
{
    char* String;
    char* CharGrab;
    char FirstSpot;

    printf("Enter a string starting with b\n");
    scanf("%s",String);
    //fgets(String, 50, stdin);
    *CharGrab = String;


    while (*String != '/0')
    {
        
        FirstSpot = *CharGrab;
        if(FirstSpot == 'b')
        {
            printf("%c",FirstSpot);
            main();
        }
        else
        {
            printf("Fail");
            main();
        }
        printf("F");
        break;
    }
    printf("HE");
    return 0;
}