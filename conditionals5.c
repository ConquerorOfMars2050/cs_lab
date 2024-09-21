#include <stdio.h>
#include <math.h>

int main(void) {

    int n;
    scanf("%d", &n);

    int a, b, c;
    a = n / 100;
    b = (n % 100) / 10;
    c = n % 10;

     
     
    if (a == b && b == c) {

        printf("The gretaest digit is %d\n", a);
        printf("The smallest digit is %d\n", a);

    }
    
    else {
    
    if (a >= b && a >= c) {

        printf("The greatest digit is %d\n", a);

    }

    else if (b >= a && b >= c) {

        printf("The greatest digit is %d\n", b);

    }

    else if (c >= a && c >= b) {

        printf("The greatest digit is %d\n", c);

    }

    if (a <= b && a <= c) {

        printf("The smallest digit is %d\n", a);

    }

    else if (b <= a && b <= c) {

        printf("The smallest digit is %d\n", b);

    }

    else if (c <= a && c <= b) {

        printf("The smallest digit is %d\n", c);

    }
    }


    return 0;


}


