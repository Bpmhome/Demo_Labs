//Kurtis Mclain
//02-11-2019
//Finds a character and replaces it
//8.0
#include <stdio.h>
#include <string.h>
//initializes the functions
int replace_character(char * string, const char findThisChar, const char replaceItWithThis);
int clearInput();

int main()
{//declaring variables
    char inputString [256] = {0};
    char FindChar;
    char ReplaceChar;
//prints conditon and scans input locating into my variable
    printf("Print a statement");
    scanf("%255s", &inputString);
    clearInput();//conditional statement
    printf("Enter the character you would like to replace and what you'd like to replace it with:");//another print and scan to state condition and take input
    scanf("%c,%c",&FindChar,&ReplaceChar);
    replace_character(inputString, FindChar, ReplaceChar);//replaces the located character and then prints it back out with the printf below
    printf("%s",inputString);

}

int replace_character(char * string, const char findThisChar, const char replaceItWithThis)
{
    char *current_pos = strchr(string,findThisChar);//strchr located the first instance of given character and puts it into current_pos
    while (current_pos){//while loop to replace the currect position with the directed character
        *current_pos = replaceItWithThis;
        current_pos = strchr(current_pos,findThisChar);
    }
    return 0;
}

int clearInput()
{//checks for validation of input before continuing
    while ( getchar() != '\n' );
}