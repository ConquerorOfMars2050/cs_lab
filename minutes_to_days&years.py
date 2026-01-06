/*
Author: Asad Rzayev
Purpose: Create a C program that converts the number of minutes to days and years.
Date: 10/12/2024
*/
 
#include <stdio.h>
 
int main()
{
    int minutes;
    long double minutesInYear = 0.0; 
    long double Years = 0.0; 
    long double Days = 0.0;
 
    printf("Please enter the number of minutes: "); 
    scanf("%d", &minutes);
    
    printf("%d\n", minutes); 
 
    minutesInYear = (60.0 * 24.0 * 365.0);
    printf("%Lf\n", minutesInYear);
 
    Years = minutes / minutesInYear;
    printf("%Lf\n", Years);
 
    Days = (minutes / 60.0) / 24.0;
    printf("%Lf\n", Days);
 
    return 0;
}
