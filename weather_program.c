/*
Author: Asad Rzayev
Purpose: Create a C program that uses a two-dimensional array in a weather program
Date: 16/12/2024
*/
 
#include <stdio.h>
 
int main()
{
    float yearlyAverage = 0.0; 
    float monthlyAverage = 0.0;
    float yearlyTotal = 0.0;
    float monthlyTotal = 0.0;
    float monthlySum = 0.0;
    float yearlySum = 0.0;
    int year = 2010;
    
 
    float rainfall[5][12] = {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };
 
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 12; j++)
        {
            yearlySum += rainfall[i][j];
        }
        
        yearlyTotal += yearlySum;
        printf("YEAR: %d -----> RAINFALL (inches): %.1f\n", year + i, yearlySum);
        yearlySum = 0.0;
 
    }
 
    yearlyAverage = yearlyTotal / 5;
    printf("\nThe yearly average is %.1f inches.\n", yearlyAverage);
 
    
    printf("\nMONTHLY AVERAGES:\n\n");
    printf("Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");
 
    for(int n = 0; n < 12; n++)
    {
        for(int m = 0; m < 5; m++)
        {
            monthlySum += rainfall[m][n];
        }
        monthlyAverage = monthlySum / 5;
        printf("%3.1f ", monthlyAverage);
        monthlySum = 0.0;
 
    }
 
    return 0;
}
