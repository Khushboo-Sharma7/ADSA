#include <stdio.h>
#include <conio.h>

int main()
{
    int n,a,b,c;
    printf("Enter number-");
    scanf("%d",&n);
    a=n%10;n/=10;
    b=n%10;n/=10;
    c=n%10;n/=10;
    if(a==b && c==n)
    printf("Number is in AABB pattern");
    else
    printf("Number is not in AABB pattern");
    getch();
    return 0;
}
