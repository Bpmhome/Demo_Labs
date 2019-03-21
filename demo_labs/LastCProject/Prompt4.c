//Kurtis Mclain
//03-18-2019
//Prompt 4
//Converts Roman to decimal and vice versa
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void displayDec(char *roman);
void displayRoman(int num);
int main()
{
    int Number = 0;
    char strCrypt[3];
    char strRoman[100];
    printf("\nPlease enter a string:\t");
    scanf("%s",strCrypt);//Get string and places into str2
    if (strcmp(strCrypt, "idf")== 0)//Compares the strings to check if the Decrypt code was put in
    {
        printf("\nUser pass key detected... \n\n\n\n\n\nDecrypting files... \n\n\n\n\nDecryption successful!\n");
    }
    else
    {
        printf("È̥̝̕͡R̗͈̺̀R͏̫̩̮͎ͅO̭̬̮̫͇̱͉̠̕R͈̗̜̩̦̪̯̼ͅ*̶̹̰U͏̟̬̙s̛͚̱̰̱̞͓͠ȩ̸̞̫̠͈̥͚r̷̡̪͎͎͇̰̙͖͇̯͝ ̴̜̦͝i̖͔̬̤̜͜n͕̹̭͎̦̖͕̜̕p͖̰̬͖̹̻͕̺̤u̗͡t̢̨̞̱ ̝̭̮̯̳̀ḩ̸̭̬̩͈a͕̱͔̘̺s̥̤̻͎̝̗ ̧̰̼̳̥̫̠ͅa̸̞̭͡͝ç̹͖̲̮̀͡t͏̯̙̬̻̼̻̣ḭ̴̘̀͡v̰̝̯͡͝ͅa̝̲t͏̘̞̳e̴̲̖̘̖̝͖̳͕̕ḍ̷̷̫̭̩͙͢ ̢̲͍͍̘͇̖ͅs̙͇͖̦̣̘̣a̘̟͎͔͍̮̫̖̝͜͡f̡̤͓̙̫̫̺͚̕͞ȩ̣̤̭t̷̢̨͓̻͉ý̶̺ ̵̙̞͚̝̝͇̟͍͓ń̶̠̟͇̞̝͈̺͡e̶͈͔̙͎͍̪̰̖͠t̶̺̭̗̀w̦̻͎̩̪̱͓̘o͙̻̝̱͇̯͞͞r̪͚̖k͏̻̦̹ ̙̰̖̀͟͞s̹̬̮͚ḩ̡͎͟ṷ̕͝t̖̦͠d̸̡͕o̱̦w̵̨̟̹̣͔̺̭̦͔͠n̳͍!̧҉̙̱̝̻̝̪̫ͅ*̙͔̯̯E̵̷̡͈̬̭̱̟͉̜R̵̡̧̞̳̦͕̞̲̯̜R̞̫̻̺̱͚̜Ơ҉̬̜͎̟͔̘̞̟R̴̳̰̝̜͍͕̩̞̼\n");//Just some silly error text to look cool
        return -1;
    }
    
    printf("\nPlease choose one of the following options.\n[1]To convert to Roman Numeral.\n[2]To convert to Decimal\n");
    scanf("%i", &Number);
    if (Number == 1)//checks input
    {
        printf("\nPlease enter your value you'd like to have converted\n");
        scanf("%i",&Number);
        displayRoman(Number);//Converts to Roman
        return 0;
    }
    else if (Number == 2)//checks input
    {
        printf("\nPlease enter your value you'd like to have converted\n");
        scanf("%s", &strRoman);
        for(int i = 0; i < strlen(strRoman); i++)          //Error handling
   {
       if(strRoman[i] != 'I' && strRoman[i] != 'V' && strRoman[i] != 'X'
           && strRoman[i] != 'L' && strRoman[i] != 'C')
       {
           printf("Bad Input\n");
           return 0;
       }
       else if((strRoman[i] == 'I' && strRoman[i+1] == 'I' && strRoman[i-1] == 'I' && strRoman[i+2] == 'I')||
               (strRoman[i] == 'X' && strRoman[i+1] == 'X' && strRoman[i-1] == 'X' && strRoman[i+2] == 'X')||
               (strRoman[i] == 'V' && strRoman[i+1] == 'V')||
               (strRoman[i] == 'L' && strRoman[i+1] == 'L')||
               (strRoman[i] == 'C' && strRoman[i+1] == 'C' && strRoman[i-1] == 'C' && strRoman[i+2] == 'C'))
       {
           printf("\n*********************************************Error****************************************************\n\t\tBad Input\n");
           return 0;
       }
    }
        displayDec(strRoman);//converts to decimal
        return 0;
    }
    else
    {
        printf("\n*********************************************Error****************************************************\n\t\tBad Input\n");

    }
}
void displayRoman(int num)
{
    printf("Roman Numeral: ");
    switch (num / 10)              //Prints the tens place
    {
        case 1:
            printf("X");
            break;
        case 2:
            printf("XX");
            break;
        case 3:
            printf("XXX");
            break;
        case 4:
            printf("XL");
            break;
        case 5:
            printf("L");
            break;
        case 6:
            printf("LX");
            break;
        case 7:
            printf("LXX");
            break;
        case 8:
            printf("LXXX");
            break;
        case 9:
            printf("XC");
            break;
        case 10:
            printf("C");
        default:
            break;
    }
    switch (num % 10)               //Prints ones place if there is a remainder 
    {
        case 1:
            printf("I");
            break;
        case 2:
            printf("II");
            break;
        case 3:
            printf("III");
            break;
        case 4:
            printf("IV");
            break;
        case 5:
            printf("V");
            break;
        case 6:
            printf("VI");
            break;
        case 7:
            printf("VII");
            break;
        case 8:
            printf("VIII");
            break;
        case 9:
            printf("IX");
            break;
        default:
            break;
    }
    printf("\n");
}

void displayDec(char *roman)
{   
    int total = 0;             //Stores the decimal value

    for(int r = 0; r < strlen(roman); r++)      //Loops for length of Roman numeral input
    {
        if(roman[r] == 'C')                 //Manipulates total based of off 100 numeral
        {
            if(roman[r-1] == 'X')           //If previous character is X
            {
                total += 80;                //Add 80 to enter the 90's (XC...)
            }
            else
            {
                total += 100;               //Take true value of C
            }
        }
        else if(roman[r] == 'L')        //Manipulates total based of off 50 numeral
        {
            if(roman[r-1] == 'X')       //If previous character is X
            {
                total += 30;            //Add 30 to enter the 40's (XL...)
            }
            else
            {
                total += 50;            //Take true value of L
            }
        }
        else if(roman[r] == 'X')        //Manipulates total based of off 10 numeral
        {
            if(roman[r-1] == 'I')       //If previous character is I
            {
                total += 8;             //Add 8 to equal 9 (IX)
            }
            else
            {
                total += 10;           //Take true value of X
            }
        }
        else if(roman[r] == 'V')        //Manipulates total based of off 5 numeral
        {
            if(roman[r-1] == 'I')       //If previous character is I
            {
                total += 3;             //Add 3 to equal 4 (IV)
            }
            else
            {
                total += 5;             //Take true value of V
            }
        }
        else if(roman[r] == 'I')        //Take true value of I
        {
            total += 1;
        }
    }
    printf("Decimal Value: %i\n", total);
}