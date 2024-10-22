#include <stdio.h>

int main(void) {
    char text[1000];
    int length = 0;

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    while (text[length] != '\0' && text[length] != '\n') {
        length++;
    }

    printf("Length: %d\n", length);

    return 0;
}
