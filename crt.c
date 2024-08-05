#include <stdio.h>
#include <math.h>
int main(){
    //if else if ladder
    /* int x;
    printf("\nEnter any value for c:");
    scanf("%d",&x);
    if(x>0)
    {
        printf("\nx= %d is positive number",x);
    }
    else if(x<0){
        printf("\nx= %d is negative number",x);
    }
    else{
        printf("\nx is zero");
    }
    printf("\nprogram completed");
    return 0; */

    //max of three number
    /* int x,y,z;
    printf("\nEnter any value for x,y,z:");
    scanf("%d %d %d",&x,&y,&z); */
    
    //by else if ladder
    /* if(x>y && x>z)
    {
        printf("%d is the largest",x);
    }
    else if(y>x && y>z)
    {
        printf("%d is the largest",y);
    }
    else if(z>x && z>y)
    {
        printf("%d is the largest",z);
    }
    else{
        printf("all the values are same");
    } */

    //by nested if else
    /* if(x>y)
    {
        if(x>z)
        {
            printf("%d is the largest",x);
        }
        else{
            printf("%d is the largest",z);
        }
    }
    else
    {
        if(y>z)
        {
            printf("%d is the largest",y);
        }
        else
        {
            printf("%d is the largest",z);
        }
    } */

    //ternary operator
    /* int max=(x>y)?((x>z)?x:z):((y>z)?y:z);
    printf("Max no is:%d",max); */
    
    //goto
    /* if(x>y)
    {
        goto s1;
        printf("hello world");//this will not print because goto will skip all the statements after goto
    }
    else
    {
        goto s2;
    }    
    goto s3;
    s1 : printf("x:%d is largest",x);
    s2 : printf("y:%d is largest",y);
    s3 : printf("\nhello world2"); */

    //switch case
    /* int ch;
    printf("Enter choice: 1)Addition 2)Substraction 3)Multiplication 4)Division:\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("Addition:%d",x+y);
        break;
    case 2:
        printf("Substraction:%d",x-y);
        break;
    case 3:
        printf("Multiplication:%d",x*y);
        break;
    case 4:
        printf("Division:%d",x/y);
        break;
    default:
        printf("Invalid input");
        break;
    } */
    /* printf("Enter any character:");
    char c;
    scanf("%c",&c);
    switch(c)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': 
            printf("\nEntered character is vowel %c",c);
            break;
        default:
            printf("Entered character is consonant %c",c);
            break;
    }
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        printf("\nEntered character is vowel %c",c);
    }
    else
    {
        printf("Entered character is consonant %c",c);
    } */

    /* int n,sum=0;
    printf("Enter number-");
    scanf("%d",&n);
    while(n!=0)
    {
        sum+=n%10;
        n/=10;
    }
    printf("Sum of digits:%d",sum); */


    //pallindrome
    /* int n;
    printf("Enter number-");
    scanf("%d",&n);
    int num=n;
    int rev=0;
    while(n!=0)
    {
        rev=rev*10+(n%10);
        n/=10;
    }
    if(rev==num)
    {
        printf("%d is pallindrome",rev);
    }
    else{
        printf("%d is not pallindrome",rev);
    } */

    //armstrong no
    /* int n,num,n1,c=0;
    printf("Enter number-");
    scanf("%d",&n);
    num=n;
    n1=n;

    while(n!=0)
    {
        c++;
        n/=10;
    }

    int arm=0;
    while(n1!=0)
    {
        arm+=pow((n1%10),c);
        n1/=10;
    }
    if(arm==num)
    {
        printf("%d is armstrong number",num);
    }
    else{
        printf("%d is armstrong not number",num);
    } */

    //fibonacci series
    /* int n;
    printf("Enter last number=");
    scanf("%d",&n);
    int f1=0,f2=1,f3,temp;
    printf("Fibonacci series: %d %d",f1,f2);
    while(f3<=n)
    {
        f3=f1+f2;
        printf(" %d",f3);
        f1=f2;
        f2=f3;
    } */

    //pattern
    int n=5;
    int c=65;
    for(int i=0;i<n;i++)
    {
        c+=i;
        for(int j=0;j<n;j++)
        {
            printf("%c",c+j);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++)
        {
            printf("%d",i%2);
            
        }
        printf("\n");
    }

    int i,j;
    for(i=0,j=6;i<j;i++,j--)
    {
        printf("l");
    }
}