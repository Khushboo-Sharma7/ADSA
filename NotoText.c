#include <stdio.h>

int main()
{
    int i=0,x,y=0,j,temp;
    printf("Enter Number-");
    scanf("%d",&x);
    while(x>0)
    {
        temp=x%10;
        y=y*10+temp;
        x=x/10;
        i++;
    }
    for(j=0;j<i;j++)
    {
        temp=y%10;
        y=y/10;
        switch(temp)
        {
            case 0:printf("Zero\t");break;
            case 1:printf("One\t");break;
            case 2:printf("Two\t");break;
            case 3:printf("Three\t");break;
            case 4:printf("Four\t");break;
            case 5:printf("Five\t");break;
            case 6:printf("Six\t");break;
            case 7:printf("Seven\t");break;
            case 8:printf("Eight\t");break;
            case 9:printf("Nine\t");break;
            default:printf("Wrong Number\t");break;
        }
    }
    return 0;
}