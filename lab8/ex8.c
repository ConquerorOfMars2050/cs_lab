#include <stdio.h>

void mergedArray(int *arr1, int size1, int *arr2, int size2, int *res) {

    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            res[k++] = arr1[i++];
        } else {
            res[k++] = arr2[j++];
        }
    }

    while (i < size1) {
        res[k++] = arr1[i++];
    }

    while (j < size2) {
        res[k++] = arr2[j++];
    }
    
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 3, 6};
    int arr2[] = {2, 4, 5, 5};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int res[size1 + size2];

    mergedArray(arr1, size1, arr2, size2, res);

    printf("Merged array is: ");
    printArray(res, size1 + size2);

    return 0;
}
