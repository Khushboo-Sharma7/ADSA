#include <stdio.h>
#include <conio.h>
int main()
{
    int x,y,a=0,b=0,i;
    printf("Enter two numbers-");
    scanf("%d %d",&x,&y);
    for(i=1;i<=x/2;i++)
    {
        if(x%i==0)
        a+=i;
    }
    for(i=1;i<=y/2;i++)
    {
        if(y%i==0)
        b+=i;
    }
    if(x==b && y==a)
    printf("%d %d are amicable",x,y);
    else
    printf("%d %d are not amicable",x,y);
    return 0;
    getch();
}
