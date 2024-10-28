#include <stdio.h>

int main() {
    int n, m;
    printf("Enter the size of the matrix: ");
    scanf("%d %d", &n, &m);

    int arr[n][m];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int a;
    printf("Enter the scalar: ");
    scanf("%d", &a);

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
           arr[i][j] = a * arr[i][j];
           printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

    return 0;
}
