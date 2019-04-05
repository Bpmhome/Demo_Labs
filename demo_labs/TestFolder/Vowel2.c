/*Count the number of vowels and constants in a string using a pointer
Probably will have to make 3 seperate variables being the ptr the string and probably a string to compare
Make a loop that'll go through the string or maybe use some string comparison
print the string and print the amount of times the vowels and constants appear*/

/*C program to count vowels and consonants in a string using pointer.*/
#include <stdio.h>
int main()
{
    char str[100];
    char *ptr;
    int  cntV,cntC;
     
    printf("Enter a string: ");
    gets(str);
     
    //assign address of str to ptr
    ptr=str;
     
    cntV=cntC=0;
    while(*ptr!='\0')
    {
        if(*ptr=='A' ||*ptr=='E' ||*ptr=='I' ||*ptr=='O' ||*ptr=='U' ||*ptr=='a' ||*ptr=='e' ||*ptr=='i' ||*ptr=='o' ||*ptr=='u')
            cntV++;
        else
            cntC++;
        //increase the pointer, to point next character
        ptr++;
    }
     
    printf("Total number of VOWELS: %d, CONSONANT: %d\n",cntV,cntC);        
    return 0;
}