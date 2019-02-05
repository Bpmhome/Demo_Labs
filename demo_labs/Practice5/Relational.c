//Kurtis Mclain
//This deduces if the given statement is true or false.
//02/05/19
#include <stdio.h>
#include <math.h>

int main()
{
    int x = 2;
    int y = 6;
    if (y < x)
    {
        printf("%i < %i True\n",y,x);
    }
    else
    {
        printf("%i < %i False\n",y,x);
    }
    if ( y<= x)
    {
      printf("%i <= %i True\n",y,x);
    }
    else
    {
        printf("%i <= %i False\n",y,x);
    }
    if ( y > x)
    {
       printf("%i > %i True\n",y,x);
    }
    else
    {
        printf("%i > %i False\n",y,x);
    }
    if (y >= x)
    {
    printf("%i >= %i True\n",y,x);
    }
    else
    {
        printf("%i >= %i False\n",y,x);
    }
    if (y == x)
    {
        printf("%i == %i True\n",y,x);
    }
    else
    {
        printf("%i == %i False\n",y,x);
    }
    if (y != x)
    {
        printf("%i != %i True\n",y,x);
    }
    else
    {
        printf("%i != %i False\n",y,x);
    }
    if (2 == y)
    {
        printf("2 == %i True\n",y);
    }
    else
    {
        printf("2 == %i False\n",y);
    }
    if (6 != x)
    {
        printf("6 != %i True\n",x);
    }
    else
    {
        printf("6 != %i False\n",x);
    }
    if (6 >= 2)
    {
        printf("6 >= 2 True\n");
    }
    else
    {
        printf("6 >= 2 False\n");
    }
    if (2 < 6)
    {
        printf("2 < 6 True\n");
    }
    else
    {
        printf("2 < 6 False\n");
    }
    if ((x !=y),(y != 3),(3 >=x))
    {
        printf("%i != %i != 3 3 > %i True",x,y,x);
    }
    else
    {
        printf("%i != %i != 3 3 > %i False",x,y,x);
    }

    return 0;

}