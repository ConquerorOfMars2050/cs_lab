/*
Author: Asad Rzayev
Purpose: Write three functions in a single program
Date: 17/12/2024
*/
 
#include <stdio.h>
#include <math.h>
 
// function prototypes
int greatestCommonDivisorFunction(int x, int y);
float absoluteValueFunction(float z);
float squareRootFunction(float z);
 
// the function which finds the greatest common divisor of two integer values and returns the result
int greatestCommonDivisorFunction(int x, int y)
{
    int gcdResult = ((x < y) ? x : y);
 
    while (gcdResult > 0)
    {
        if(x % gcdResult == 0 && y % gcdResult == 0)
        {    
            break;
        }
 
    gcdResult--;
    
    }
 
    return gcdResult;
}
 
// the function which calculates the absolute value of a number
float absoluteValueFunction(float z)
{
    float absResult;
 
    if(z < 0)
    {
        absResult = z * (-1);
    }
 
    else
    {
        absResult = z;
    }
 
    return absResult;
}
 
// the function which computes the square root of a number
float squareRootFunction (float k)
{
    float sqrtResult;
 
    if(k < 0)
    {
        printf("You entered a negative number to the square root!\n");
        return -1.0;
    }
 
    else
    {
        sqrtResult = sqrt(k);
    }
 
    return sqrtResult;
}
 
int main (void)
{   
    // printing the greatest common divisor function
    int x = 6;
    int y = 9;
 
    int greatestCommonDivisor = greatestCommonDivisorFunction (x, y);
 
    printf("The greatest common divisor of %d and %d is: %d\n", x, y, greatestCommonDivisor);
    
    
    // printing the absolute value function
    float z = -5.7;
    float absoluteValue = absoluteValueFunction (z);
 
    printf("The absolute value of %.2f is: %.2f\n", z, absoluteValue);
 
    // printing the square root function
    float k = 6;
    float squareRoot = squareRootFunction (k);
 
    printf("The square root of %.2f is: %.2f\n", k, squareRoot);
   
 
    return 0;
}
