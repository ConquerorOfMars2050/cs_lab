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


    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    
    int min = a[0];

    for(i=0; i<n; i++)
    {
        if(a[i]<min)
        {
            min = a[i];
        }
    }

    int max = a[0];

    for(i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }

    int sum = 0;

    for(i=0; i<n; i++)
    {
        sum = sum + a[i];
    }

    sum = sum - (max + min);

    printf("%d", sum);

    return 0;
}