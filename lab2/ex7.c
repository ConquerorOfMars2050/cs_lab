#include <stdio.h>

int main (void) {

    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int length = 1;
    

    printf("%d ", n);

    while (n > 1) {

        if (n % 2 == 0) {

            n = n / 2;

            printf("%d ", n);

        }

        else {

            n = 3 * n + 1;

            printf("%d ", n);

        }


        length++;



    }

    printf("\n%d", length);

    return 0;
}