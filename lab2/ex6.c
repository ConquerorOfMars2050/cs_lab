#include <stdio.h>
#include <math.h>

int main (void) {

    int n, place, result;

    printf("Enter an integer, please: ");
    scanf("%d", &n);

    n = abs(n);

    place = 1;
    result = 0;

    while (n > 0) {

        int digit = n % 10;
        if (digit != 0) {

            result = digit * place + result;

            place = place * 10;


        }

        n = n / 10;


    }

    printf("The resulting number is %d", result);

    return 0;
    }
