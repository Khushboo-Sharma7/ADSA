#include <iostream>
using namespace std;

class DoublyLL
{
    class GetNode{
        public:
        int data;
        GetNode *next;
        GetNode *prev;
        GetNode()
        {
            next=NULL;
            prev=NULL;
        }
    };
    public:
    GetNode *head=NULL;
    void append()
    {
        GetNode *newnode=new GetNode();
        int data;
        cout <<"Enter data:";
        cin>>data;
        newnode->data=data;
        if(head==NULL)
        {
            head=newnode;
        }
        else{
            GetNode *ptr=head;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            newnode->prev=ptr;
            ptr->next=newnode;
        }
    }
    void atBeg(){
        int data;
        cout <<"enter data:";
        cin>>data;
        GetNode *newnode=new GetNode();
        newnode->data=data;
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
    void atPos(){
        int data,pos,flag=1;
        cout <<"enter data:";
        cin>>data;
        GetNode *newnode=new GetNode();
        newnode->data=data;
        cout <<"Enter position:";
        cin>>pos;
        GetNode *ptr=head;
        while(ptr!=NULL)
        {
            if(flag==pos)
            {
                newnode->prev=ptr->prev;
                newnode->next=ptr;
                ptr->prev->next=newnode;
                ptr->prev=newnode;
                cout <<"Node appended"<<endl;
                break;
            }
            flag++;
            ptr=ptr->next;
        }
        if(ptr==NULL)
        {
            cout <<"Node not found";
        }
    }
    void afterVal(){
        int data,val;
        cout <<"enter data:";
        cin>>data;
        GetNode *newnode=new GetNode();
        newnode->data=data;
        cout <<"Enter value:";
        cin>>val;
        GetNode *ptr=head;
        while(ptr->data!=val)
        {
            ptr=ptr->next;
        }
        newnode->prev=ptr;
        newnode->next=ptr->next;
        ptr->next=newnode;
        newnode->next->prev=newnode;
    }
    void display(){
        GetNode *ptr=head;
        if(head==NULL)
        {
            cout <<"Empty List"<<endl;
        }
        else{
            while(ptr!=NULL)
            {
                cout <<ptr->data<<"->";
                ptr=ptr->next;
            }
            cout <<"NULL"<<endl;
        }
    }
    void delEnd(){

    }
    void delBeg(){

    }
    void delPos(){

    }
    void delVal(){

    }
};
int main()
{
    DoublyLL obj;
    int n;
    while(1)
    {
        cout <<"Enter choice:"<<endl;
        cin>>n;
        switch (n)
        {
            case 1:
                obj.append();
                break;
            case 2:
                obj.atBeg();
                break;
            case 3:
                obj.atPos();
                break;
            case 5:
                obj.display();
                break;
            case 4:
                obj.afterVal();
                break;
            case 6:
                obj.delEnd();
                break;
            case 7:
                obj.delBeg();
                break;
            case 8:
                obj.delPos();
                break; 
            case 9:
                obj.delVal();
                break;
            case 10:
                exit(0);
                break;
            default:
                cout <<"Invalid Input";
                break;
        }
    }
}