#include <stdio.h>

int main()
{
    char charFirstName[13] = {0};
    char charMiddleName[13] = {0};
    char charLastName[13] = {0};

    printf("Please enter your full name:");
    scanf("%12s %12s %12s", &charFirstName, &charMiddleName, &charLastName);
    printf("%s\t\n%s\t\n%s\t\n", charFirstName, charMiddleName, charLastName);

    int intOne = 0;
    int intTwo = 0;

    printf("Enter two numbers and seperate with a *: ");
    scanf("%i%*c%i", &intOne, &intTwo);
    int intTotal = intOne * intTwo;
    printf("The result of %i mutltiplied by %i is %i.\n", intOne,intTwo, intTotal);
        return 0;
}