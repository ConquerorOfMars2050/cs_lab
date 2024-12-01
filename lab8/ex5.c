#include <stdio.h>

int stringLength(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }

    return length;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("The length of the string is: %d\n", stringLength(str));

    return 0;
}
