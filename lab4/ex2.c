#include <stdio.h>

int main (void) {

    int n, i;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    int a[n];

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    if(a[0] < a[1])
    {
            printf("%d ", a[0]);
    }


    for(i=1; i<n-1; i++)
    {
        if(a[i] < a[i-1] && a[i] < a[i+1])
        {
            printf("%d ", a[i]);
        }
    }

    if(a[n-1] < a[n-2])
    {
        printf("%d ", a[n-1]);
    }

    return 0;

}