#include <stdio.h>

int findMax(int *arr, int size) {
    int *ptr = arr;
    int max = *ptr;

    for (int i = 0; i < size; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }
    return max;
}

int main() {
    int arr[] = {3, -5, 7, -2, 8, -1, 4, 26, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max = findMax(arr, size);
    printf("The maximum element is: %d\n", max);

    return 0;
    
}
