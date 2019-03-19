//Kurtis Mclain
//03-18-2019
//Prompt 1
//Asks users to enter and destroy a string with substrings
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *searchPtr;//This pointer will be used to store the location of the first occurance of the search string in the line of text
    char str1[44] = {"The quick brown fox jumps over the lazy dog"};//Where the first string will go
    char str2[44];//The checking string
    

    for(int i = 0; (i < 44 && str1[i] != '\0'); i++)//goes to max length of string or until null
    {
        str1[i] = str1[i] + 3; //the key for encryption is 3 that is added to the ASCII value
    }

    //printf("\n Please enter a string:\t");
    //gets(str1);

    printf("\nPlease enter a string:\t");
    gets(str2);//Get string and places into str2
    if (strcmp(str2, "idf")== 0)//Compares the strings to check if the Decrypt code was put in
    {
        for(int i = 0; (i < 44 && str1[i] != '\0'); i++)//goes to max length of string or until null
        {
            str1[i] = str1[i] - 3; //the base text is 3 that is subtracted from the ASCII value
        }
    }
    else
    {
        printf("È̥̝̕͡R̗͈̺̀R͏̫̩̮͎ͅO̭̬̮̫͇̱͉̠̕R͈̗̜̩̦̪̯̼ͅ*̶̹̰U͏̟̬̙s̛͚̱̰̱̞͓͠ȩ̸̞̫̠͈̥͚r̷̡̪͎͎͇̰̙͖͇̯͝ ̴̜̦͝i̖͔̬̤̜͜n͕̹̭͎̦̖͕̜̕p͖̰̬͖̹̻͕̺̤u̗͡t̢̨̞̱ ̝̭̮̯̳̀ḩ̸̭̬̩͈a͕̱͔̘̺s̥̤̻͎̝̗ ̧̰̼̳̥̫̠ͅa̸̞̭͡͝ç̹͖̲̮̀͡t͏̯̙̬̻̼̻̣ḭ̴̘̀͡v̰̝̯͡͝ͅa̝̲t͏̘̞̳e̴̲̖̘̖̝͖̳͕̕ḍ̷̷̫̭̩͙͢ ̢̲͍͍̘͇̖ͅs̙͇͖̦̣̘̣a̘̟͎͔͍̮̫̖̝͜͡f̡̤͓̙̫̫̺͚̕͞ȩ̣̤̭t̷̢̨͓̻͉ý̶̺ ̵̙̞͚̝̝͇̟͍͓ń̶̠̟͇̞̝͈̺͡e̶͈͔̙͎͍̪̰̖͠t̶̺̭̗̀w̦̻͎̩̪̱͓̘o͙̻̝̱͇̯͞͞r̪͚̖k͏̻̦̹ ̙̰̖̀͟͞s̹̬̮͚ḩ̡͎͟ṷ̕͝t̖̦͠d̸̡͕o̱̦w̵̨̟̹̣͔̺̭̦͔͠n̳͍!̧҉̙̱̝̻̝̪̫ͅ*̙͔̯̯E̵̷̡͈̬̭̱̟͉̜R̵̡̧̞̳̦͕̞̲̯̜R̞̫̻̺̱͚̜Ơ҉̬̜͎̟͔̘̞̟R̴̳̰̝̜͍͕̩̞̼\n");//Just some silly error text to look cool
        return -1;
    }
    printf("\nUser pass key detected... \n\n\n\n\n\nDecrypting files... \n\n\n\n\nDecryption successful!\n");
    printf("\nThe sentence you must defeat is one that has been passed down for many generations...\nYour opponent will be:\n%s\n",str1);//Greatly exaggerated battle,
    printf("\nUser please enter your string:\t");
    gets(str2);//Takes user input to compare to the string in str1
    searchPtr = strstr(str1, str2);//user searchPtr as a value that comes back true or false
    if(searchPtr)//checks if true
    {
        int Length = strlen(str2);//sets the length
        
        printf("\nSuccessful attack!");
        if (strcmp(str1,str2) == 0)//string compare to get a win condition
        {
            printf("\nCongratulations!\nYou!\nAre!\nA Loser!\nBecause in the game of life. Anybody who plays text games is a loser!\n");
            return 0;
        }
        else
        {
            *searchPtr = '\0';
            strcat(str1, searchPtr+Length);//appends the string pointer to by searchPtr to the end of str1
            printf("\nWOW look how badly you damaged it!\nIt once was The quick brown fox jumps over the lazy dog\nBut is now %s\n",str1);
        }
    }
    else
    {
        printf("\nYou died...");
        return -1;
    }
    printf("\nLooks like you only have one more attack left in you...\nOdds are you won't make it but lets try our best!");
    printf("\nRemember all that is left of this sentence is\n%s\n",str1);
    gets(str2);
    searchPtr = strstr(str1, str2);//user searchPtr as a value that comes back true or false
    if(searchPtr)
    {
        printf("\nSuccessful attack!");
        printf("\nWOW look how badly you damaged it!\nIt once was %s",str1);
        if (strcmp(str1,str2) == 0)//string compare to get a win condition
        {
            printf("\nCongratulations!\nYou!\nAre!\nA Loser!\nBecause in the game of life. Anybody who plays text games is a loser!\n");
            return 0;
        }
        else
        {
            int Length = strlen(str2);
            *searchPtr = '\0';
            strcat(str1, searchPtr+Length);//appends the string pointer to by searchPtr to the end of str1
            printf("\nToo bad it wasn't enough\nGame over\n( ͡° ͜ʖ ͡°)\n");
        }
    }
    else
    {
        printf("\nGame Over\nR.I.P\n");
    }
    
    

}