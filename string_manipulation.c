/*
Author: Asad Rzayev
Purpose: Write a program that tests your understanding of char arrays
Date: 21/12/2024
*/
 
#include <stdio.h>
#include <stdbool.h>
 
int numberOfCharacters (char string[]);
void concatenateTwoStrings (char result[], const char str1[], const char str2[]);
bool compareTwoStrings (const char array1[], const char array2[]);
 
int numberOfCharacters (char string[])
{
    unsigned int count = 0;
    unsigned int length = 0;
 
    while(string[count] != '\0')
    {
        count++;
    }
 
    length = count;
 
    return length;
 
}
 
void concatenateTwoStrings (char result[], const char str1[], const char str2[])
{
    unsigned int count1 = 0;
 
    while (str1[count1] != '\0')
    {
        result[count1] = str1[count1]; 
        
        count1++;
    }
 
    unsigned int count2 = 0;
 
    while (str2[count2] != '\0')
    {
        result[count1 + count2] = str2[count2];
 
        count2++;
    }
 
    result[count1 + count2] = '\0';
}
 
bool compareTwoStrings (const char array1[], const char array2[])
{
    unsigned int count = 0;
    unsigned int i = 0;
    unsigned int j = 0;
    unsigned int length1 = 0;
    unsigned int length2 = 0;
 
    bool isEqual = true;
    
    while(array1[i] != '\0')
    {
        i++;
    }
 
    length1 = i;
 
    while(array2[j] != '\0')
    {
        j++;
    }
 
    length2 = j;
    
    
    while (array1[count] == array2[count] && array1[count] != '\0' && array2[count] != '\0')
    {
        count++;
    }
 
    if(count == length1 && count == length2)
    {
        isEqual = true;
    }
 
    else
    {
        isEqual = false;
    }
 
    return isEqual;
 
}
 
int main(void)
{
 
    char myName[] = {"Asad "};
    char mySurname[] = {"Rzayev"};
    
    char result[50];
 
 
 
 
    printf("The number of characters in the string \"Asad \" is %u.\n", numberOfCharacters(myName));
 
    concatenateTwoStrings(result, myName, mySurname);
    printf("%s\n", result);
 
    // printf("%d\n", compareTwoStrings(myName, mySurname));
 
    if(compareTwoStrings(myName, mySurname) == 0)
    {
        printf("The strings are not equal.\n");
    }
 
    else
    {
        printf("The strings are equal.\n");
    }
 
    return 0;
}
