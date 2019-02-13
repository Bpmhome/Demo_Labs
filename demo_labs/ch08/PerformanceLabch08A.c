//Kurtis Mclain
//02-11-2019
//Finds a character and replaces it
//8.0
#include <stdio.h>
#include <string.h>

int replace_character(char * string, const char findThisChar, const char replaceItWithThis);
int clearInput();

int main()
{
    char inputString [256] = {0};
    char FindChar;
    char ReplaceChar;

    printf("Print a statement");
    scanf("%255s", &inputString);
    clearInput();
    printf("Enter the character you would like to replace and what you'd like to replace it with:");
    scanf("%c,%c",&FindChar,&ReplaceChar);
    replace_character(inputString, FindChar, ReplaceChar);
    printf("%s",inputString);

}

int replace_character(char * string, const char findThisChar, const char replaceItWithThis)
{
    char *current_pos = strchr(string,findThisChar);
    while (current_pos){
        *current_pos = replaceItWithThis;
        current_pos = strchr(current_pos,findThisChar);
    }
    return 0;
}

int clearInput()
{
    while ( getchar() != '\n' );
}