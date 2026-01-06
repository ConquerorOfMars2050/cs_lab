/*
Author: Asad Rzayev
Purpose: Create a program that will find all the prime numbers from 3 - 100
Date: 15/12/2024
*/
 
#include <stdio.h>
 
int main()
{
    int primes[100] = {2, 3, 5, 7};
 
    int index = 4;
 
    for(int i = 11; i <= 100; i++, index++)
    {
        primes[index] = i;
 
        if(primes[index] % 2 != 0 && primes[index] % 3 != 0 && primes[index] % 5 != 0 && primes[index] % 7 != 0)
        {
            if(i == 11)
            {
                printf("%d %d %d %d ", 2, 3, 5, 7);
            }
 
            printf("%d ", primes[index]);
        }
    }
 
    return 0;
}
