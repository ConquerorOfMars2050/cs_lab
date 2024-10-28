#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the matrix (n): ");
    scanf("%d", &n);

    int arr[n][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int I = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                
                if (arr[i][j] != 1) {
                    I = 0;
                    break;
                }
            } else {
    
                if (arr[i][j] != 0) {
                    I = 0;
                    break;
                }
            }
        }
        if (!I) {
            break;
        }
    }

    if (I) {
        printf("The matrix is an identity matrix.\n");
    } else {
        printf("The matrix is not an identity matrix.\n");
    }

    return 0;
}
