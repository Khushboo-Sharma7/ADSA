#include <iostream>
using namespace std;

class Dlinkedlist{

    class GetNode{
        public:
        int data;
        GetNode *next;
        GetNode *prev;
        GetNode(){
            next=NULL;
            prev=NULL;
        }
    };
    public:
    GetNode *head=NULL,*last=NULL;
    void append()
    {
        int data;
        cout <<"Enter data:";
        cin >>data;
        GetNode *newnode=new GetNode();
        newnode->data=data;
        if(last==NULL)
        {
            newnode->next=newnode;
            newnode->prev=newnode;
            head=newnode;
            last=newnode;
            cout <<"Node appended";
        }
        else{
            newnode->next=last->next;
            newnode->prev=last;
            last->next=newnode;
            cout <<"node appended";
        }
    }
    void addAtBegin()
    {
        int data;
        cout <<"Enter data:";
        cin >>data;
        GetNode *newnode=new GetNode();
        newnode->data=data;
        newnode->data=data;
        if(head==NULL)
        {
            head=newnode;
            cout <<"Node appended";
        }
        else{
            newnode->next=head;
            newnode->prev=head;
            head=newnode;
            cout <<"Node appended";
        }
        
    }
    void addAtPos()
    {
        int data,pos,flag=1;
        cout <<"Enter data:";
        cin >>data;
        cout <<"Enter position";
        cin >>pos;
        GetNode *newnode=new GetNode();
        newnode->data=data;
        if(head==NULL)
        {
            head=newnode;
            cout <<"Node appended";
        }
        else{
            GetNode *ptr=head;
            while(ptr!=NULL)
            {
                if(pos==flag)
                {
                    newnode->next=ptr;
                    newnode->prev=ptr->prev;
                    ptr->prev->next=newnode;
                    cout <<"Node appended";
                    break;
                }
                ptr=ptr->next;
                flag++;
            }
        }
    }
    void addAfterEle()
    {

    }
    void display()
    {
        GetNode *ptr=last;
            if(last==NULL)
            cout <<"EMPTY";
            else{
                cout <<endl;
                do{
                    cout<<ptr->data<<"<->";
                    ptr=ptr->next;
                }while(ptr!=head);
            }
    }
    void deletee(){

    }
    void deleteBeg(){

    }
};
int main()
{
    Dlinkedlist obj;
    int n;
    while(1)
    {
        cout <<"\n1.Append";
        cout <<"\n2.Add at begining";
        cout <<"\n3.Add at any position";
        cout <<"\n4.Add after element";
        cout <<"\n5.Display";
        cout <<"\n6.Delete";
        cout <<"\n7.Delete at beginning";
        cout <<"\n8.exit"<<endl;
        cin>>n;
        switch(n)
        {
            case 1:
                obj.append();
                break;
            case 2:
                obj.addAtBegin();
                break;
            case 3:
                obj.addAtPos();
            case 4:
                obj.addAfterEle();
                break;
            case 5:
                obj.display();
                break;
            case 6:
                obj.deletee();
                break;
            case 7:
                obj.deleteBeg();
                break;
            case 8:
                exit(0);
                break;
            default:
                cout <<"Invalid input";
                break;
        }
    }
    return 0;
}