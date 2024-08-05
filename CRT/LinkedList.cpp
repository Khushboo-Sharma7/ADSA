#include <iostream>
using namespace std;

class LinkedList
{
    class GetNode{
        public:
        int data;
        GetNode *next;
        GetNode()
        {
            next=NULL;
        }
    };
    GetNode *head=NULL;
    public:
    void append()
    {
        GetNode *newnode=new GetNode();
        int data;
        cout<<"Enter data:";
        cin>>data;
        newnode->data=data;
        if(head==NULL)
        {
            head=newnode;
            cout <<"Node Appended"<<endl;
        }
        else{
            GetNode *ptr=head;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            ptr->next=newnode;
            cout <<"Node Appended"<<endl;
        }
    }
    void atBeg()
    {
        GetNode *newnode=new GetNode;
        int data;
        cout <<"Enter data:";
        cin >>data;
        if(head==NULL)
        {
            head=newnode;
            cout <<"Node Appended"<<endl;
        }
        else{
        newnode->data=data;
        newnode->next=head;
        head=newnode;
        }
    }
    void atPos()
    {
        GetNode *newnode=new GetNode();
        GetNode *ptr=head;
        int data,pos,flag=1;
        cout <<"Enter data:";
        cin>>data;
        newnode->data=data;
        cout <<"Enter position:";
        cin>>pos;
        while(ptr->next!=NULL)
        {
            if(flag==pos-1)
            {
                break;
            }
            ptr=ptr->next;
        }
        newnode->next=ptr->next;
        ptr->next=newnode;
    }
    void afterVal(){
        GetNode *newnode=new GetNode();
        GetNode *ptr=head;
        int data,val;
        cout <<"Enter data:";
        cin >>data;
        cout <<"Enter value after which data is to be inserted:";
        cin >>val;
        newnode->data=data;
        while(ptr->next!=NULL)
        {
            if(ptr->data==val)
            {
                newnode->next=ptr->next;
                ptr->next=newnode;
                return;
            }
            ptr=ptr->next;
        }
        cout <<"Data not found";
    }
    void delEnd()
    {
        if(head==NULL)
        {
            cout <<"Empty list";
        }
        else{
            GetNode *ptr=head;
            while(ptr->next->next!=NULL)
            {
                ptr=ptr->next;
            }
            ptr->next=NULL;
        }
    }
    void delBeg()
    {
        if(head==NULL)
        cout <<"Empty list";
        else
        head=head->next;

    }
    void delPos()
    {
        if(head==NULL)
        cout<<"Empty LInked List"<<endl;
        else{
            int pos,flag=1;
            cout <<"Enter position you want to delete element:";
            cin >>pos;
            GetNode *ptr=head;
            while(ptr->next!=NULL)
            {
                if(flag==pos-1)
                {
                    ptr->next=ptr->next->next;
                    return;
                }
                flag++;
                ptr=ptr->next;
            }
            cout <<"position not found";
        }
    }
    void delVal(){
        int val;
        cout <<"Enter position you want to delete element:";
        cin >>val;
        GetNode *ptr=head;
        if(val==head->data)
        head=head->next;
        else{
        while(ptr->next!=NULL)
        {
            if(ptr->next->data==val)
            {
                ptr->next=ptr->next->next;
                return;
            }
            ptr=ptr->next;
        }
        cout <<"position not found";}
    }
    void display(){
        cout <<"Linked list:"<<endl;
        GetNode *ptr=head;
        if(head==NULL)
        cout<<"Empty LInked List"<<endl;
        else{
        while(ptr!=NULL)
        {
            cout <<ptr->data<<"->";
            ptr=ptr->next;
        }
        cout <<"NULL"<<endl;}
    }
};
int main()
{
    LinkedList obj;
    int n;
    while(1)
    {
        cout <<"Choices:"<<endl;
        cout <<"Enter 1 to add node at last"<<endl;
        cout <<"Enter 2 to add node at beginning" <<endl;
        cout <<"Enter 3 to add node at given position" <<endl;
        cout <<"Enter 4 to add node after given value" <<endl;
        cout <<"Enter 5 to display list" <<endl;
        cout <<"Enter 6 to delete from end" <<endl;
        cout <<"Enter 7 to delete from beginning" <<endl;
        cout <<"Enter 8 to delete from given position" <<endl;
        cout <<"Enter 9 to delete after given value" <<endl;
        cout <<"Enter 10 to exit" <<endl;
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
            case 4:
                obj.afterVal();
                break;
            case 5:
                obj.display();
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