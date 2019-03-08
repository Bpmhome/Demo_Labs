//Kurtis Mclain
//02/20/2019
//combines two string literals then prints
#include <string.h>
#define BUFSIZE 64
#define STRINGIFY_FOR_REAL(x) #x
#define PASTE_FOR_REAL(x, y) STRINGIFY_FOR_REAL (x##y)
int main()
{
    char BigArray[BUFSIZE] = {PASTE_FOR_REAL(Help,Please)}; //puts combined string into array
    puts(BigArray);

    return 0;
}