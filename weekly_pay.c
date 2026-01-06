/*
Author: Asad Rzayev
Purpose: Create a C program that calculates your weekly pay.
Date: 12/12/2024
*/
 
#include <stdio.h>
 
int main()
{
    int number_of_hours;
 
    printf("Please enter the number of hours worked: ");
    scanf("%d", &number_of_hours);
 
    float basic_pay_rate = 12.00;
    float gross_pay = 0.0;
    float taxes = 0.0; 
    float net_pay = 0.0;
 
    if(number_of_hours > 40)
        gross_pay = (basic_pay_rate * 40) + ((number_of_hours - 40) * basic_pay_rate * 1.5);
    else
        gross_pay = basic_pay_rate * number_of_hours;
 
    
    if(gross_pay <= 300)
        taxes = 0.15 * gross_pay;
    else if (gross_pay > 300 && gross_pay <= 450)
        taxes = (0.15 * 300) + (0.20 * (gross_pay - 300));
    else
        taxes = (0.15 * 300) + (0.20 * 150) + (0.25 * (gross_pay - 450));
    
    
    net_pay = gross_pay - taxes;
 
    printf("The gross pay is: %f\n", gross_pay);
    printf("The taxes are: %f\n", taxes);
    printf("The net pay is: %f", net_pay);
 
    return 0;
 
    }
    
