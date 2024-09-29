#include <stdio.h>
#include <math.h>

int main (void) {

    float r, x, y, x0, y0;

    printf("Enter the coordinates of the central point of the circle and its radius, please: ");
    scanf("%f %f %f", &x0, &y0, &r);

    printf("Enter the coordinates of the point, please: ");
    scanf("%f %f", &x, &y);

    float distance = sqrt((((x - x0) * (x - x0)) + ((y - y0) * (y - y0))));




    if (distance == r) {

        printf("The point is on the circle\n");

    }

    if (distance < r) {

        printf("The point is inside the circle\n");

    }

    if (distance > r) {

        printf("The point is outside the circle\n");

    }

    return 0;
    
}