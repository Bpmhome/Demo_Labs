//Kurtis Mclain
//Logical Operators functioning for practical application
//02/05/2019
#include <stdio.h>
#include <math.h>

int main()
{
    int x = 99;
    int y = 0;

    if (y&&x)
    {
        printf("%i && %i True\n",y,x);
    }
    else
    {
        printf("%i && %i False\n",y,x);
    }
    if (y||x)
    {
        printf("%i||%i True\n",y,x);
    }
    else
    {
        printf("%i||%i False\n",y,x);
    }
    if (!y)
    {
        printf("!%i True\n",y,x);
    }
    else
    {
        printf("!%i False\n",y,x);
    }
    if (y&&0)
    {
        printf("%i&&0 True\n",y,x);
    }
    else
    {
        printf("%i&&0 False\n",y,x);
    }
    if (x||42)
    {
        printf("%i||42 True\n",y,x);
    }
    else
    {
        printf("%i||42 False\n",y,x);
    }
    if (!x)
    {
        printf("!%i True\n",y,x);
    }
    else
    {
        printf("!%i False\n",y,x);
    }
    if (x&&x)
    {
        printf("%i&&%i True\n",y,x);
    }
    else
    {
        printf("%i&&%i False\n",y,x);
    }
    if (y||y)
    {
        printf("%i||%i True\n",y,x);
    }
    else
    {
        printf("%i||%i False\n",y,x);
    }
    if (!1)
    {
        printf("!1 True\n",y,x);
    }
    else
    {
        printf("!1 False\n",y,x);
    }
    if (1&&1)
    {
        printf("1&&1 True\n",y,x);
    }
    else
    {
        printf("1&&1 False\n",y,x);
    }
    if ((0&&1)||(2&&3))
    {
        printf("0&&1||2&&3 True",x,y,x);
    }
    else
    {
        printf("0&&1||2&&3 False",x,y,x);
    }

    return 0;
}