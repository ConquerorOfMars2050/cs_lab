#include <stdio.h>

int main(void) {

int n, i;

int a[n];

float avg = 0, sum = 0;

printf("Enter n: ");
scanf("%d\n", &n);

for(i=0; i<n; i++)
{
    scanf("%d", &a[i]);
}

for(i=0; i<n; i++)
{
    sum = sum + a[i];

}

avg = sum / n;

for(i=0; i<n; i++)
{
if(a[i] < avg)
{
    printf("%d ", a[i]);
}
}

return 0;
}