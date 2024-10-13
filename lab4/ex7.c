#include <stdio.h>

int main(void) 
{
    int n, i, j, temp;

    printf("Enter n: ");
    scanf("%d", &n);

    int a[n];

    for(i=0; i<n; i++)
    {
        printf("Enter integer %d: ", i+1);
        scanf("%d", &a[i]);
    }

    int min = a[0];
    for(i=0; i<n; i++)
    {
        if(a[i]<min)
        min = a[i];
    }

    int max = a[0];
    for(i=0; i<n; i++)
    {
        if(a[i]>max)
        max = a[i];
    }

    for(i=0; i<n; i++)
    {
        if(a[i] == min)
        printf("%d ", a[i]);
    }
    
    for(i=0; i<n; i++)
    {
        if(a[i] != min && a[i] != max)
        printf("%d ", a[i]);
    }

    for(i=0; i<n; i++)
    {
        if(a[i] == max)
        printf("%d ", a[i]);
    }


    return 0;
}