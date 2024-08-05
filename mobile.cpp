#include <iostream>
#include <stdio.h>
using namespace std;
#define CAPACITY 10
int queue[CAPACITY];
int front=-1,rear=-1;
int stack[CAPACITY];
int top=-1;

//queue
int isEmpty()
{
    if(front==rear && front==-1)
    return 1;
    else 
    return 0;
}
int isFull()
{
    if(rear==CAPACITY-1)
    return 1;
    else return 0;
}

void insert(int ele)
{
    if(isFull())
    {
        cout <<"queue is full";
    }
    else{
        if(front==-1){
            front++;
            rear++;
            queue[front]=ele;
        }
        else{
            rear++;
            queue[rear]=ele;
        }
    }
}
int deleted()
{
    int ele;
    if(isEmpty())
    {
        cout <<"queue is empty";
        return 0;
    }
    else{
        ele=queue[front];
        for(int i=front;i<rear;i++)
        {
            queue[i]=queue[i+1];
        }
        if(rear==0)
        {
            front--;rear--;
        }
        else
        rear--;
        return ele;
    }
}
void traverse_q()
{
    if(isEmpty())
    {
        cout <<"queue is empty"<<endl;
    }
    else{
        cout <<"Queue:";
    for(int i=front;i<=rear;i++)
    {
        cout <<queue[i] <<" ";
    }
    }
}

//stack
int isFull_s()
{
    if(top==CAPACITY-1)
    return 1;
    else
    return 0;
}
int isEmpty_s(){
    if(top==-1)
    return 1;
    else
    return 0;
}
void push(int ele){
    if(isFull_s())
    cout <<"\nStack is full";
    else{
        stack[++top]=ele;
    }
}
void traverse_s()
{
    if(isEmpty_s())
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
    int ele;
    for(int i=0;i<7;i++)
    {
        cout <<"Enter elements:";
        cin >>ele;
        insert(ele);
    }
    cout <<"\nMobile Queue:";
    traverse_q();
    for(int i=0;i<7;i++)
    {
        int ele;
        ele=deleted();
        push(ele);
    }
    cout <<"\nMobile Stack:";
    traverse_s();
}