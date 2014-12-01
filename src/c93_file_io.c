/*
 * Example #93
 * fprintf() function.
 */
#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char **argv)
{
    char ch;
    char *file_name;
    FILE *fp;
    int i;

    if (argc != 2)
    {
        puts("Usage: a.out file_name");
        exit(EXIT_FAILURE);
    }

    file_name = argv[1];
    fp = fopen(file_name, "w");

    if( fp == NULL )
    {
        perror("Error while opening the file.\n");
        exit(EXIT_FAILURE);
    }

    for (i = 1; i < 10000; i++)
    {
        fprintf(fp, "%d\t%10.6f\n", i, 1.0f/i);
    }

    fclose(fp);

    return 0;
}

