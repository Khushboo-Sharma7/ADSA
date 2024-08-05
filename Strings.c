#include <stdio.h>
#include <string.h>
/* int fact(int n)
{
    int f=1;
    if(n==0)
    return 1;
    else
    f=n*fact(n-1);
    n--;
    return f;
}
int main(){
    int n=5;
    printf("Factorial of %d : %d",fact(n));
} */

int slen(char *s1)
{
    int len=0;
    while(*s1!='\0')
    {
        len++;
        s1++;
    }
    return len;
}
void supr(char *s1)
{
    while(*s1!='\0')
    {
        if(*s1>=97 && *s1<=122)
        {
            *s1=*s1-32;
        }
        s1++;
    }
    
}
void slwr(char *s1)
{
    while(*s1!='\0')
    {
        if(*s1>=65 && *s1<=90)
        {
            *s1=*s1+32;
        }
        s1++;
    }
}
void srev(char *s1)
{
    char *s2,temp;
    s2=s1;
    while(*s2!='\0')
    {
        s2++;
    }
    s2--;
    while(s1<s2)
    {
        temp=*s1;
        *s1=*s2;
        *s2=*s1;
        s1++;
        s2--;
    }

}
void scpy(char *s2,char *s1)
{
    
    while(*s1!='\0')
    {
        *s2=*s1;
        s1++;
        s2++;
    }
    *s2='\0';
}

void scat(char *s1,char *s2)
{
    while(*s1!='\0')
    {
        s1++;
    }
    while(*s2!='\0')
    {
        *s1=*s2;
        s1++;
        s2++;
    }
    *s1='\0';
}
int scmp(char *s1,char *s2)
{
    while(*s1!='\0' || *s2!='\0')
    {
        if(*s1!=*s2)
        {
            break;
        }
        s1++;
        s2++;
    }
    return *s1-*s2;

}

int main()
{
    /* int x,y,*p;
    x=10;
    p=&x;
    int **p1=&p;
    printf("x:%d p:%d &p:%d *p:%d p1:%d &p1:%d **p1:%d  ",x,p,&p,*p,p1,&p1,**p1); */

    //1>Length
    char n1[20],n2[20],n3[20];
    printf("Enter any string1:");
    gets(n1);
    printf("Enter any string2:");
    gets(n2);
    printf("%d is the length of string using function\n",slen(n1));
    supr(n1);//uppercase
    puts(n1);
    slwr(n2);//lowercase
    puts(n2);
    srev(n1);//reverse
    puts(n1);
    scpy(n3,n2);//copy
    puts(n3);
    scat(n1,n2);//concatenation
    puts(n1);
    int flag;
    flag=scmp(n2,n3);
    if(flag==0)
    {
        printf("%s and %s Strings are equal",n2,n3);
    }
    else{
        printf("%s and %s Strings are not equal",n2,n3);
    }


    
    return 0;
}