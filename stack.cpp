#include <iostream>
#include <stdlib.h>
using namespace std;
#define CAPACITY 10
int stack[CAPACITY];
int top=-1;

int isFull()
{
    if(top==CAPACITY-1)
    return 1;
    else
    return 0;
}
int isEmpty(){
    if(top==-1)
    return 1;
    else
    return 0;
}
void push(){
    int ele;
    cout <<"\nEnter element to be pushed:";
    cin>>ele;
    if(isFull())
    cout <<"\nStack is full";
    else{
        stack[++top]=ele;
    }
}
void pop(){
    if (isEmpty())
    cout <<"\nStack is empty";
    else {
        int ele=stack[top];
        top--;
        cout <<ele<<" popped out of stack";
    }
}
void peek()
{
    if(isEmpty())
    cout <<"\nStack is empty";
    else
    cout <<stack[top];
}
void traverse()
{
    if(isEmpty())
    cout <<"\nStack is empty";
    else{
        int temp=top;
        while(temp!=-1)
        {
            cout <<stack[temp]<<endl;
            temp--;
        }
    }
    
}
int main()
{
    int n;
    while(1)
    {
        cout <<"\n1.Push";
        cout <<"\n2.pop";
        cout <<"\n3.peek";
        cout <<"\n4.Traverse";
        cout <<"\n0.Exit";
        cout <<"\nEnter input:"<<endl;
        cin>>n;
        switch (n)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            traverse();
            break;
        case 0:
            exit(0);
            break;
        default:
            cout <<"Invalid input";
            break;
        }
    }
}