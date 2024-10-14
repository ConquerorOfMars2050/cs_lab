#include <stdio.h>

int main() {
    int a[3000], i;
    int x, y;
    int found = 0;

    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);

    a[0] = 1;
    a[1] = 1;

    for (i = 2; ; i++) {
        a[i] = a[i - 1] + a[i - 2];

        if (a[i] >= x && a[i] <= y) {
            printf("%d ", a[i]);
            found = 1;
        }

        
        if (a[i] > y) {
            break;
        }
    }

    
    if (found!=1) {
        printf("DO NOT EXIST");
    }

    return 0;
}
