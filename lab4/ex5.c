#include <stdio.h>

int main(void) {

    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int a[n+1], i;

    printf("Insert n number of sorted integers: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    int idx, el;

    printf("Enter the element you want to insert: ");
    scanf("%d", &el);

    for(a[i] = a[n-1]; a[i] >= el; i--)
    {
        idx=i+1;
    }
    
    idx = idx - 1;
    printf("%d\n", idx);
    
    for(i = n; i > idx; i--)
    {
        a[i] = a[i-1];
    }

    a[idx] = el;

    for(i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }


    return 0;
}
