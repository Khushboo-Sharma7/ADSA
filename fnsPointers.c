#include <stdio.h>
//passing argumnets and return valus
/* int fact(int);
int main()
{
    int n,f;
    printf("Enter number-");
    scanf("%d",&n);
    f=fact(n);
    printf("Factorial of %d is %d",n,f);
    return 0;
}
int fact(int n)
{
    int f=1;
    while(n>0)
    {
        f*=n;
        n--;
    }
    return f;

} */

//passing arguments and no return type
/* void fact(int);
int main()
{
    int n,f;
    printf("Enter number-");
    scanf("%d",&n);
    fact(n);
    return 0;
}
void fact(int n)
{
    int f=1,num=n;
    while(n>0)
    {
        f*=n;
        n--;
    }
    printf("Factorial of %d is %d",num,f);

} */

//no passing argumnets and return value
/* int fact();
int main()
{
    int f;
    f=fact();
    printf("Factorial is %d",f);
    return 0;
}
int fact()
{
    int n, f=1;
    printf("Enter number-");
    scanf("%d",&n);
    while(n>0)
    {
        f*=n;
        n--;
    }
    return f;

} */

//no passing arguments and no return type
/* void fact();
int main()
{
    fact();
    return 0;
}
void fact()
{
    int n;
    printf("Enter number-");
    scanf("%d",&n);
    int f=1,num=n;
    while(n>0)
    {
        f*=n;
        n--;
    }
    printf("Factorial of %d is %d",num,f);
} */

//factorial equation
/* int fact(int n)
{
    int f=1;
    while(n>0)
    {
        f*=n;
        n--;
    }
    return f;
}
int main()
{
    int m,n,f;
    printf("Enter number m and n-");
    scanf("%d%d",&m,&n);
    printf("Reult of !%d+!%d/!(%d-%d) is %d",m,n,m,n,fact(m)+fact(n)/fact(m-n));
    return 0;
} */

//recursion
/* int fact(int n)
{
    int f=1;
    if(n==0)
    {
        return 1;
    }
    else{
        f=n*fact(n-1);
    }
    return f;
}
int main()
{
    int n,f;
    printf("Enter number-");
    scanf("%d",&n);
    f=fact(n);
    printf("Factorial of %d is %d",n,f);
    return 0;
} */

//pointer variable
/* int main(){
    int x,y,*p;
    x=10;
    p=&x;
    printf("x:%d p:%d &p:%d *p:%d\n ",x,p,&p,*p);
    x++;
    printf("x:%d p:%d &p:%d *p:%d\n ",x,p,&p,*p);
    p++;
    printf("x:%d p:%d &p:%d *p:%d\n ",x,p,&p,*p);
    return 0;
} */

//call by value and call by reference
//value
/* void swap(int x,int y)
{
    int temp=y;
    y=x;
    x=temp;
    printf("Value of x,y-%d %d",x,y);
}
int main()
{
    int x=10;
    int y=20;
    printf("Value of x,y-%d %d",x,y);
    swap(x,y);
} */
/* void swap(int *x,int *y)
{
    int *temp;
    temp=*y;
    y=*x;
    x=*temp;
}
int main()
{
    int x=10;
    int y=20;
    printf("Value of x,y-%d %d",x,y);
    swap(&x,&y);
    printf("Value of x,y-%d %d",x,y);
} */