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
    for (int i = 0; i < n; i++) {
        sum += arr[i][i]; 
        sum += arr[i][n - i - 1]; 
    }

    if (n % 2 == 1) {
        sum -= arr[n / 2][n / 2];
    }

    printf("The sum of the elements of both diagonals is: %d\n", sum);
    return 0;
}
