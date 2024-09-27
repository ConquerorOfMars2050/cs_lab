#include <stdio.h>

int main(void) {

    int n, sum, product, i, counter;

    sum = 0;
    product = 1;
    counter = 1;

    printf("Enter an integer which is greater than or equal to 1: ");
    scanf("%d", &i);

    while (counter <= i) {
        n = 3 * counter - 1;
        sum = sum + n;
        product = product * n;

       counter++;
    }

    printf("The sum is %d\n", sum);
    printf("The product is %d\n", product);

    return 0;

    
}