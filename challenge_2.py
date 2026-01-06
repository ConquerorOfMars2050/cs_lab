/*
Author: Asad Rzayev
Purpose: Find the perimeter and area of a rectangle
Date: 09/12/2024
*/
 
#include <stdio.h>
 
int main()
{
    // declaring variables
    double height, width;
    double perimeter = 0.0;
    double area = 0.0;
 
    // taking input form the user
    printf("Enter the height of a rectangle: ");
    scanf("%lf", &height);
    
    printf("Enter the width of a rectangle: ");
    scanf("%lf", &width);
 
    // performing perimeter calculation
    perimeter = 2.0 * (height + width);
 
    // performing area calculation
    area = width * height;
 
    // displaying input
    printf("The primeter of the rectangle is: %f\n", perimeter);
    printf("The area of the rectangle is: %lf\n", area);
 
    return 0;
}
