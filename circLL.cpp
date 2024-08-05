/* #include <iostream>
using namespace std;
class CircLL
{
    class GetNode
    {
        public:
        int data;
        GetNode *next;
        GetNode(){
            next=NULL;
        }
    };
    public:
    GetNode *head=NULL;
    void append(){
        int d;
        cout <<"enter data:";
        cin >>d;
        GetNode *newnode=new GetNode();
        newnode->data=d;
        if(head==NULL)
        {
            head=newnode;
            head->next=head;
            cout <<"data apended";
        }
        else{
            GetNode *ptr=head;
            while(ptr->next!=head)
            {
                ptr=ptr->next;
            }
            ptr->next=newnode;
            newnode->next=head;
            cout <<"Data apended";
        }
    }
    void addAtBegin()
    {
        int d;
        cout <<"enter data:";
        cin >>d;
        GetNode *newnode=new GetNode();
        newnode->data=d;
        if(head==NULL)
        {
            head=newnode;
            head->next=head;
            cout <<"data apended";
        }
        else{
            GetNode *ptr=head;
            while(ptr->next!=head)
            {
                ptr=ptr->next;
            }
            ptr->next=newnode;
            newnode->next=head;
            head=newnode;
            cout <<"Data apended";
        }
    }
    void display(){
            GetNode *ptr=head;
            if(head==NULL)
            cout <<"EMPTY";
            else{
                cout <<endl;
                do{
                    cout<<ptr->data<<"->";
                    ptr=ptr->next;
                }while(ptr!=head);
                cout<<"NULL";
            }
        }
}; */

#include <iostream>
using namespace std;
class CircLL
{
    class GetNode
    {
        public:
        int data;
        GetNode *next;
        GetNode(){
            next=NULL;
        }
    };
    public:
    GetNode *head,*last=NULL;
    void append(){
        int d;
        cout <<"enter data:";
        cin >>d;
        GetNode *newnode=new GetNode();
        newnode->data=d;
        if(last==NULL)
        {
            head=newnode;
            last=newnode;
            last->next=last;
            head->next=head;
            cout <<"data apended";
        }
        else{
            newnode->next=last->next;
            last->next=newnode;
            last=newnode;
            cout <<"data apended";
        }
    }
    void addAtBegin()
    {
        int d;
        cout <<"enter data:";
        cin >>d;
        GetNode *newnode=new GetNode();
        newnode->data=d;
        if(last==NULL)
        {
            head=newnode;
            last=newnode;
            last->next=last;
            head->next=head;
            cout <<"data apended";
        }
        else{
            newnode->next=last->next;
            last->next=newnode;
            last=newnode;
            head=newnode;
            cout <<"data apended";
        }
    }
    void display(){
            GetNode *ptr=head;
            if(head==NULL)
            cout <<"EMPTY";
            else{
                cout <<endl;
                do{
                    cout<<ptr->data<<"->";
                    ptr=ptr->next;
                }while(ptr!=head);
                cout<<"NULL";
            }
        }
};
int main()
{
    CircLL obj;
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
        cout <<"\n8.Delete at given position";
        cout <<"\n9.Exit" <<endl;
        cin>>n;
        switch(n)
        {
            case 1:
                obj.append();
                break;
            case 2:
                obj.addAtBegin();
                break;
            case 5:
                obj.display();
                break;
            /* 
            case 3:
                obj.addAtPos();
                break;
            case 4:
                obj.addAfterEle();
                break;
            
            case 6:
                obj.deletee();
                break;
            case 7:
                obj.deleteBeg();
                break;
            case 8:
                obj.deletepos();
                break; */
            case 9:
                exit(0);
                break;
            default:
                cout <<"Invalid input";
                break;
        }
    }
    return 0;

}