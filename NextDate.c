#include <stdio.h>

int main()
{
    int d,m,y,nod;
    printf("Enter date in ddmmyy format-");
    scanf("%d%d%d",&d,&m,&y);
    switch(m)
    {
        case 1:case 3:case 5:case 7:case 8:case 10:case 12:
            nod=31;
            break;
        case 4: case 6: case 9:case 11:
            nod=30;
            break;
        case 2:
            if(y%4==0)
            nod=29;
            else
            nod=28;
            break;
        default: printf("Invalid Month");    
    }
    if (d==nod && m==12)
    {
        y++;
        d=1;
        m=1;
    }
    else if(d==nod && m!=12)
    {
        d=1;
        m++;
    }
    else
    {
        d++;
    }
    if(m<=12 && d<=nod)
    {
        printf("Next Date-");
        printf("%d\t%d\t%d",d,m,y);
    }
    return 0;
}