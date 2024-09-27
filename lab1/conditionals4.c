#include <stdio.h>
#include <math.h>

int main(void) {


    float a, b, c, discriminant, x;
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a *c;

    float root1, root2;

    root1 = ((-b + sqrt(b * b - 4 * a * c)) / (2 * a));
    root2 = ((-b - sqrt(b * b - 4 * a * c)) / (2 * a));


    if (discriminant > 0) {

        printf("%f %f", root1, root2);

    }

    if (discriminant == 0) {

        printf("%f\n", root1);

    }
    
    if (discriminant < 0) {

        printf("No roots\n");

    }

}

