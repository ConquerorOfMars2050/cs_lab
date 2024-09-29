#include <stdio.h>
#include <math.h>

int main (void) {

    int n;
    
    printf("Enter an integer: ");
    scanf("%d", &n);

    int sum;
    
    n = abs(n);

    while ( n > 0) {

        int digit = n % 10;
        if (digit % 2 == 0) {

            sum = sum + digit;

        }

        n = n / 10;

    }

    printf("Sum of all even digits is %d", sum);

    return 0;
    



}