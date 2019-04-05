/*Count the number of vowels and constants in a string using a pointer
Probably will have to make 3 seperate variables being the ptr the string and probably a string to compare
Make a loop that'll go through the string or maybe use some string comparison
print the string and print the amount of times the vowels and constants appear*/
#include <stdio.h>

int main()
{
    char string[256];
    char *ptrGetter;
    int VowelCtr, ConstCtr;
    printf("Enter your string: ");
    gets(string);

    ptrGetter=string;
    while(*ptrGetter !='\0')
    {
        if(*ptrGetter=='A' ||*ptrGetter=='E' ||*ptrGetter=='I' ||*ptrGetter=='O' ||*ptrGetter=='U' ||*ptrGetter=='a' ||*ptrGetter=='e' ||*ptrGetter=='i' ||*ptrGetter=='o' ||*ptrGetter=='u')
            VowelCtr++;
        else
        {
            ConstCtr++;
        }
    }
    printf("\nVowels:\t%d\nConstants:\t%d\n",VowelCtr,ConstCtr);
    return 0;
}