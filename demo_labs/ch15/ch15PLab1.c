#include <errno.h>
#include <string.h>
#include <stdio.h>

int main()
{
    FILE *fp;
    char c;
    printf("Opening a file for test\n");
    fp = fopen("Testl", "r");
    //if(feof(fp))
    //{
        perror("Error: ");
        printf("Error: %s", strerror(errno));
        return errno;
    //}
    fclose(fp);
}