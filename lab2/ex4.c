#include <stdio.h>

int main(void) {

    int n;
    float x;

    printf("Enter the number of floating-point numbers: ");
    scanf("%d", &n);
    
    float sum = 0;
    unsigned int counter = 1;

    while (counter <= n) {

        printf("Enter a floating-point number: ");
        scanf("%f", &x);
        
        sum = sum + x;
        
        ++counter;
    }

    printf("The sum of floats is %.1f", sum);

    return 0;





}