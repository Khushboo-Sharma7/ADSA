#include <stdio.h>

int main()
{
    int a[10],n,i=0;
    printf("Enter no-");
    scanf("%d",&n);
    if(n>0)
    {
        while(n>0)
    {
        a[i]=n%2;
        n/=2;
        i++;
    }
    printf("Binary no-");
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    }
    else
    {
        printf("Enter positive number");
    }
    

    return 0;
}