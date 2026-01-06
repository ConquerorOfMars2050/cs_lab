/* 
Author: Asad Rzayev
Purpose: write a program to find the total number of lines in a text file
Date: 08/01/2025
*/
 
#include <stdio.h>
 
int main (void)
{
    FILE *fp = NULL;
    int counter = 0;
    int c;
 
    fp = fopen("file.txt", "r");
 
    if(fp == NULL)
    {
        perror("Error in opening file");
        return -1;
    }
 
    while((c = fgetc(fp)) != EOF)
    {
        if (c == '\n')
        {
            counter++;
        }
    }
 
    printf("The total number of lines in the text file is %d.\n", ++counter);
 
    fclose(fp);
    fp = NULL;
 
    return 0;
}
