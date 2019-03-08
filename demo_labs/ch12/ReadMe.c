#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
    printf("Need to provide the files name.\n");
    return EXIT_FAILURE;
    }
    FILE * fp = fopen(argv[1], "r");
    if (NULL == fp)
    {
        printf("Failed to open %s\n", argv[1]);
        return;
    }
    while (!feof(fp))
    {
        //Read one char at a time
        int c = fgetc(fp);
        printf("%d ", c);
    }
}