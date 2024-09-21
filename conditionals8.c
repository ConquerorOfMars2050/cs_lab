#include <stdio.h>

int main (void) {

    int a, b, c;
    printf("Enter the lengths of the three sticks, please: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a + b > c && a + c > b && b + c > a) {

        printf("Yes!\n");

    }

    else {

        printf("No!\n");

    }

    return 0;
}