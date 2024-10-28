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

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
           arr[i][j] == arr[j][i];
           printf("%d ", arr[j][i]);
        }

        printf("\n");
    }

    return 0;
}
