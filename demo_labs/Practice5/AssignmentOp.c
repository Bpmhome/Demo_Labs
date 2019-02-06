//Kurtis Mclain
//Utilization and studying of the outcomes/funtions in which Assignment Operators are utilized.
//02-05-2019
#include <stdio.h>
#include <math.h>

int Maths(int a, int b)
{
a =9;
b = 3;
}
int main()
{
    int x = 9;
    int y = 3;
    printf("%i *= %i :%i\n",x , y,x *=y );
    Maths(x,y);
    printf("%i /= %i :%i\n",x , y,x /= y );
    Maths(x,y);
    printf("%i %= %i :%i\n",x , y,x %= y );
    Maths(x,y);
    printf("%i += %i :%i\n",x , y,x += y );
    Maths(x,y);
    printf("%i -= %i :%i\n",x , y,x -= y );
    Maths(x,y);
    printf("%i *= ++%i :%i\n",x , y,x *= ++y );
    Maths(x,y);
    printf("%i /= %i-- :%i\n",x , y,x /= y-- );
    Maths(x,y);
    printf("%i %= --%i :%i\n",x , x,x %= --x );
    Maths(x,y);
    printf("%i += --%i :%i\n",x , y,x += --y );
    Maths(x,y);
    printf("%i -= %i++ :%i\n",x , y,x -= y++ );
    Maths(x,y);
    printf("%i %= %i || %i /= %i-- :%d",y ,y ,x ,x, (y %= y)||(x /= x) );

    return 0;
}