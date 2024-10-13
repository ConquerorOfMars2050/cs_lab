#include <stdio.h>

int main(void) 
{
    int n, i, j;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    int a[n];

    for(i=0; i<n; i++)
    {
        printf("Please enter integer %d: ", i+1);
        scanf("%d", &a[i]);
    }

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("Distnict elements and their counts:\n");

    for(i=0; i<n; i++)
    {
        int count = 1;
        
        while(i<n-1 && a[i] == a[i+1])
        {
            i++;
            count++;
        }

        printf("%d %d\n", a[i], count);

    }

    return 0;
}