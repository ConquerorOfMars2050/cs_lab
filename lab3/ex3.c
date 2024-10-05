#include <stdio.h>

int main(void) {

    int n, counter;
    float sum, i;

    sum = 0;
    counter = 1;

    printf("Enter a positive integer: ");
    scanf("%u", &n);

    for (sum = 0, counter = 1; counter <= n; counter ++) {
        i =  (float) 1 / counter;
        sum = sum + i;

    }

    printf("The sum is %.3f\n", sum);

    return 0;

    
}