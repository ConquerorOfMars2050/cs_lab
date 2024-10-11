#include <stdio.h>

int main(void) {

    int n, k;

    printf("Enter n and k: ");
    scanf("%d %d", &n, &k);

    int a[n];
    int i, counter = 0;

    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=n-1; i>=0; i--)
    {
        printf("%d ", a[i]);
        counter++;

        if(counter==k)
        {
            printf("\n");
            counter = counter - k;
        }

    
    }

    return 0;
}