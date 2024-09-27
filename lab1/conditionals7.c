#include <stdio.h>

int main (void) {

    int radius;
    printf("Enter the radius of the basketball, please: ");
    scanf("%d", &radius);

    int width, length, height;
    printf("Enter the width, length and height of the box, please: ");
    scanf("%d %d %d", &width, &length, &height);

    if (width >= 2 * radius && length >= 2 * radius && height >= 2 * radius) {

        printf ("You can send the ball to your friend using the only box you have!\n");

    }

    else {

        printf ("Unfortunately, you cannot send the ball to your friend using the only box you have.\n");

    }

    return 0;
}