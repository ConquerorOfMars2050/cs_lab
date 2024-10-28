#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    int arr[n][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int sum = 0;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            sum += arr[i][j];
        }
    }

    printf("The sum of elements under the main diagonal is: %d\n", sum);

    return 0;
}
