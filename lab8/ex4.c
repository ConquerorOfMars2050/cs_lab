#include <stdio.h>
#include <string.h>

int isPalindrome(char *str) {
    char *start = str;
    char *end = str + strlen(str) - 1;

    while (start < end) {
        if (*start != *end) {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

int main() {
    char str[] = "";
    if (isPalindrome(str)) {
        printf("The string %s IS a palindrome.", str);
    } else {
        printf("The string %s ISN'T a palindrome.", str);
    }
    return 0;
}
