/* 
Author: Asad Rzayev
Purpose: Write a program that converts all characters of a file to uppercase and write the results out to a temporary file. Then rename the temporary file to the original filename and remove the temporary filename.
Date: 09/01/2025
*/
 
#include <stdio.h>
#include <ctype.h>
 
int main (void)
{
    FILE *filePointer1 = NULL;
    FILE *filePointer2 = NULL;
    int ch;
 
    filePointer1 = fopen("file.txt", "r");
 
    if (filePointer1 == NULL)
    {
        perror("Error in opening file");
        return -1;
    }
 
    filePointer2 = fopen("temporary.txt", "w");
 
    if (filePointer2 == NULL)
    {
        perror("Error in opening file");
        return -1;
    }
 
    while((ch = fgetc(filePointer1)) != EOF)
    {
        fputc(toupper(ch), filePointer2);
    }
 
    fclose(filePointer1);
    filePointer1 = NULL;
    
    fclose(filePointer2);
    filePointer2 = NULL;
 
    remove("file.txt");
 
    rename("temporary.txt", "file.txt");
 
    remove("temporary.txt");
 
    filePointer1 = fopen("file.txt", "r+");
 
    while((ch = getc(filePointer1)) != EOF)
    {
        printf("%c", ch);
    }
 
    fclose(filePointer1);
    filePointer1 = NULL;
 
    return 0;
}
