//Kurtis Mclain
//02-10-2019
//Do while used to take a string and capitalize everything
//7.3C
#include <stdio.h>
#include <ctype.h>

int main()
{//creation of variables and array
    int CharArray [26] = {0};
    char Character = 0;
    int Counter = 0;
    //Prints the following statement
    printf("Enter a string: ");
    do
    {   //getchar grabs input and stores into Character
        Character = getchar();
        //Conditional statement to check if the input is not null and only alphabetic characters
        if ((Character >= 0 && Character< 65) || (Character > 122))
        {//exits the loop
            break;
        }//puts characters to uppercase and the increases the counter
            CharArray[Counter] = (toupper(Character));
        Counter++;
        //checks to see if newline is  input
    } while (Character != '\n');
    for(int i = 0; i < 23; i++)
    {//for loop to print the string
        printf("%c", (char)CharArray[i]);
    }
    
}