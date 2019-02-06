//Kurtis Mclain
//Gets the Hypontenuse of a triangle
//02-05-2019
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main(void) 
{
    int A = 0;
    int B = 0;
    printf("Please enter two legs for your right triangle: \n");
    scanf("%i%*c%i", &A, &B);
    //Error handles for anything other then numerical inputs
    if ((A = getchar())||(B = getchar()))
    {
        //returns to main function essentially reseting the script
        main();
    }
    //checks to make sure numbers are input higher then 0
    else if ((A > 0)&&(B > 0))
    {
        int C = sqrt((A*A) + (B*B));
        printf("The hypotenuse of your right triangle is: %i", C );
    }
    else
    {
        main();
    }
    
    return 0;
}