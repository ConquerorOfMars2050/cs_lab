#include <stdio.h>

int main(void) {

    int n, sum, product, i, counter;

    printf("Enter an integer which is greater than or equal to 1: ");
    scanf("%d", &i);

    sum = 0;  
    product = 1; 

    for (counter = 1; counter <= i; counter++) {
        n = 2 * counter - 1; 
        sum = sum + n;       
        product = product * n; 
    }

    printf("The sum is %d\n", sum);
    printf("The product is %d\n", product);

    return 0;
}
