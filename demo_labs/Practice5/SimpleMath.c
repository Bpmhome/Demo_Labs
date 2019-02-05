#include <stdio.h>
#include <math.h>
int main()
{
    int x = 7;
    int y = 4;
    float z = 0;

    printf("%i * %i = %i",x ,y , (x*y));
    printf("%i = %i / %i",(x/y), x, y);
    printf("%i % %i = %i", x, y, (x%y));
    printf("%i + %i = %i", y, x, (y+x));
    printf("i - %i = %i",y, x, (y-x));
    printf("%i", -y);
    printf("++i = %i",++x);
    printf("i++ = %i",y++);
    printf("i-- = %i",x--);
    printf("--%i = %i",--y);
    printf("1 + 2 * (3 + %i) + 5 = %i",y,1 + 2 * (3 + y) + 5);
    
    return 0;

}
