/* #include <iostream>
using namespace std;
#define CAPACITY 15
char stack[CAPACITY];
int top=-1;

int isfull()
{
    if(top==CAPACITY-1)
    return 1;
    else return 0;
}
int isempty()
{
    if(top==-1)
    return 1;
    else return 0;
}
void push(char n)
{
    if(isfull())
    {
        cout <<"Stack is full";
    }
    else
    {
        stack[++top]=n;
    }
}
void traverse()
{
    if(isempty())
    {
        cout <<"Stack is empty";
    }
    else{
        int temp=top;
        while(temp!=-1)
        {
            cout <<stack[temp] <<endl;
            temp--;
        }
    }
}
int main()
{
    char str[]="khushboo";
    cout <<"Enter string:";
    cin >>str; 
    int size=sizeof(str)/sizeof(str[0]);
    for(int i=0;i<size;i++)
    {
        push(str[i]);
    }
    traverse();
} */

#include <iostream>
using namespace std;
#define CAPACITY 15
int stack[CAPACITY];
int top=-1;

int isfull()
{
    if(top==CAPACITY-1)
    return 1;
    else return 0;
}
int isempty()
{
    if(top==-1)
    return 1;
    else return 0;
}
void push(char n)
{
    if(isfull())
    {
        cout <<"Stack is full";
    }
    else
    {
        stack[++top]=n;
    }
}
void traverse()
{
    if(isempty())
    {
        cout <<"Stack is empty";
    }
    else{
        int temp=top;
        while(temp!=-1)
        {
            cout <<stack[temp] <<endl;
            temp--;
        }
    }
}
int main()
{
    int num[]={1,2,3,4};
    int size=sizeof(num)/sizeof(num[0]);
    for(int i=0;i<size;i++)
    {
        push(num[i]);
    }
    traverse();
}


