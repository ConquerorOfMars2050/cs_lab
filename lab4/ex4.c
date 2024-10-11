#include <stdio.h>

int main(void) {

    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int a[n+1], i;

    printf("Insert n number of integers: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    int idx, el;

    printf("Enter the index of the element that you want to insert into the array and the element itself: ");
    scanf("%d %d", &idx, &el);

    if (idx < 0 || idx > n)
    {
        printf("Invalid input\n");
        return 0;
    }

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
