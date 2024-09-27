#include <stdio.h>

int main(void) {

    unsigned int a, b, k, sum, c;


    printf("Enter two positive integers that represent a range [a, b] and another positive integer k: ");
    scanf("%u %u %u", &a, &b, &k);


    sum = 0;
    c = a; 

    while (c <= b) {
        
        if (c % k == 0) {

            sum = sum + c;

        }

        c++;

    }

    printf("Sum is %u", sum);

}