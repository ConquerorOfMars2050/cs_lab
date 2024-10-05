#include <stdio.h>

int main(void) {

    int n;
    float x;

    printf("Enter the number of floating-point numbers: ");
    scanf("%d", &n);
    
    float sum = 0;
    unsigned int counter = 1;

    for (sum = 0, counter = 1; counter <= n; sum = sum + x, ++counter) {

        printf("Enter a floating-point number: ");
        scanf("%f", &x);
        
        
    
    }

    printf("The sum of floats is %.1f", sum);

    return 0;





}