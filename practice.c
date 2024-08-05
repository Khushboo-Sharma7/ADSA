#include <stdio.h>
int main()
{
    int *pv,c;
    c=22;
    printf("&c:%d,c:%d",&c,c);
    pv=&c;
    printf("&pv:%d,*pv:%d",pv,*pv);
    c=11;
    printf("&pv:%d,*pv:%d",pv,*pv);
    *pv=2;
    printf("&c:%d,c:%d",&c,c);
}
