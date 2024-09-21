#include <stdio.h>

int main(void) {

    int n;
    scanf("%d", &n);


    if ( n % 6 == 0) {

        printf("Excellent\n");

    }
    
    if ( n % 2 == 0 || n % 3 == 0) {

        printf("OK\n");

    }

    else {

        printf("Noo\n");

    }

    return 0;

}