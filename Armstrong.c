#include <stdio.h>
#include <math.h>

int main()
{
    int n,s=0,num,temp,arms=0,a;
    printf("Enter number-");
    scanf("%d",&n);
    num=n;
    while(num>0)
    {
        s++;
        num=num/10;
    }
    temp=n;
    while(temp>0)
    {
        a=temp%10;
        arms=arms+pow(a,s);
        temp/=10;
    }
    if(arms==n)
    printf("%d is an armstrong number",n);
    else
    printf("%d is not an armstrong number",n);
    return 0;
}