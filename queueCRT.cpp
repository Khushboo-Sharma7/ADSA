#include <iostream>
#include <stdio.h>
using namespace std;
#define CAPACITY 10
int queue[CAPACITY];
int front=-1,rear=-1;

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
void insert()
{
    if(isFull())
    {
        cout <<"queue is full";
    }
    else{
        cout <<"Enter element:";
        int ele;
        cin>>ele;
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
void deleted()
{
    if(isEmpty())
    {
        cout <<"queue is empty";
    }
    else{
        int ele=queue[front];
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
        cout <<ele <<"deleted from queue";
    }
}
void traverse()
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
int main()
{
    while(1)
    {
        cout <<"\n1.Insert" ;
        cout <<"\n2.Deleted" ;
        cout <<"\n3.Traverse" ;
        cout <<"\n4.Exit" ;
        int n;
        cout <<"\nEnter choice:" <<endl;
        cin >>n;
        switch(n){
            case 1:
                insert();
                break;
            case 2:
                deleted();
                break;
            case 3:
                traverse();
                break;
            case 4:
                exit(0);
                break;
            default:
                cout <<"invalid Input";
                break; 
        }
    }
}