//Kurtis Mclain
//Checks first character of a string
//02-07-2019
#include <stdio.h>
#include <math.h>

int main()
{
    char charArray [256] ={0};
    printf("Enter a string");
    scanf("%255[^\n]c", &charArray);
    //Just conditonal statement that prevents non numeric/alphabetic characters
    if((charArray[0]<= 32)||(charArray[0]>= 126))
    {
        
    }
    
    else
    {
        printf("%s",charArray);
    }
    return 0;
}