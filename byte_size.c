/*
Author: Asad Rzayev
Purpose: Create a C program that displays the byte size of basic data types supported in c.
Date: 11/12/2024
*/
 
#include <stdio.h>
 
int main()
{
    printf("%zd\n", sizeof(int));
    printf("%zd\n", sizeof(char));
    printf("%zd\n", sizeof(long));
    printf("%zd\n", sizeof(long long));
    printf("%zd\n", sizeof(double));
    printf("%zd\n", sizeof(long double));
 
    return 0;
}
