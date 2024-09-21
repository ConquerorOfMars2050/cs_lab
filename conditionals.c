#include <stdio.h>

int main(void) {

    int x, y;
    scanf("%d", &x);

    if (x > 0) {

        
        y = x * x - 2 * x  + 3;
        printf("%d", y);

    }
    if (x == 0) {

        y = x - 5;
        printf("%d", y);

    }
    if (x < 0) {

        y = x * x + 2 * x - 3;
        printf("%d", y);

    }

    return 0;
}