/*
Author: Asad Rzayev
Purpose: Write a program that will print the contents of a file in reverse order
Date: 10/01/2025
*/
 
#include <stdio.h>
 
int main(void)
{
    FILE *fp = NULL;
    int len;
    int counter;
    int ch;
 
    fp = fopen("file.txt", "r");
 
    if(fp == NULL)
    {
        perror("Error in opening file");
        return -1;
    }
 
    fseek(fp, 0, SEEK_END);
 
    len = ftell(fp);
 
    for(counter = 1; counter <= len; ++counter)
    {
        fseek(fp, -counter, SEEK_END);
        ch = getc(fp);
        printf("%c", ch);
    }
 
    fclose(fp);
    fp = NULL;
    
    return 0;
}
