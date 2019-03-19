//Chapters we should cover: ch02(Variables),ch03(Arrays/Strings),ch04(Print/Scan),ch05(Arithmetic Operators),ch07(Control Flow),ch11(Pointers),
//ch12(File.IO),ch13(Memory Allocation),ch14(Structs)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <malloc.h>

char * Storage(char *History);
char PrintHistory(char *History);
int main()
{
    char *GameHistory;

    printf("Enter a string: ");//Ask for a string 
    scanf("%s", &GameHistory);//Takes what the user inputs placing it into GameHistory
    printf("%s\n", &GameHistory);//Test to see if something will print at all
    Storage(GameHistory);
    PrintHistory(GameHistory);
}

char * Storage(char *History)
{
    int Index = 0;
    char *HistorySpace = (char*)malloc(10*sizeof(char));
    strcpy(HistorySpace[Index], History);//strcpy take string History placing into the index location of HistorySpace
    printf("%s", &HistorySpace[0]);
    Index++;//Increase the index
    return *History;//Returning HistorySpace value into GameHistory
}

char PrintHistory(char *History)
{
    for(int i =0 ; i<sizeof(&History); i++)
    {
        printf("%s", &History[i]);
    }
}