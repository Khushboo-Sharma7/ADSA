#include <stdio.h>
#include <math.h>

int main()
{
    int a[10],k,n=0;
    int i=0,j=0;
    printf("Enter no of elements in binary-");
    scanf("%d",&k);
    printf("Enter elements one by one-");
    for(i;i<k;i++)
    {
        scanf("%d",&a[i]);
    }
    for(k=k-1;k>=0;k--)
    {
        n+=(a[k]*pow(2,j));
        j++;
    }
    printf("Decimal of given binary-");
    printf("%d",n);

    return 0;
}