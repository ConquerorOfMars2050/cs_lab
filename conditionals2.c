#include <stdio.h>

int main(void) {

    int n;
    scanf("%d", &n);
    
    int c = n % 2;

    if (c == 0) {

        printf("The number %d is even", n);
    
    }

    if (c != 0) {

        printf("The number %d is odd", n);

    }

    return 0;
}