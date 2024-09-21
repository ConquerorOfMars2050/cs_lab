#include <stdio.h>
#include <math.h>

int main (void) {

    int n;
    printf("Enter any three-digit integer number, please: ");
    scanf("%d", &n);

    int x, y, z;

    x = n / 100;
    y = (n % 100) / 10;
    z = n % 10;

    int q = x * y * z;


    if (q != 0) {

        printf("%d", q);

    }

    else {

        if (x == 0) {

            printf("%d", q = y * z);

        }

        else if (y == 0) {

            printf("%d", q = x * z);

        }

        else if (z == 0) {

            printf("%d", q = x * y);

        }

        else {

            printf("%d", 0);

        }
        
    }

    return 0;
}