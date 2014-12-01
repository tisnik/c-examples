/*
 * Example #92
 * Reading items from the file char-by-char.
 */
#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char **argv)
{
    char ch;
    char *file_name;
    FILE *fp;

    if (argc != 2)
    {
        puts("Usage: a.out file_name");
        exit(EXIT_FAILURE);
    }

    file_name = argv[1];
    fp = fopen(file_name, "r");

    if( fp == NULL )
    {
        perror("Error while opening the file.\n");
        exit(EXIT_FAILURE);
    }

    printf("The contents of %s file are :\n", file_name);

    while( ( ch = fgetc(fp) ) != EOF )
    {
        printf("%c",ch);
    }

    fclose(fp);

    return 0;
}

