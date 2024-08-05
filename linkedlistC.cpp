#include <iostream>
using namespace std;
class LinkedList{
    class GetNode{
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
            int data;
            cout <<"Enter data:";
            cin >>data;
            GetNode *newNode=new GetNode();
            newNode->data=data;
            if(head==NULL)
            {
                head=newNode;
                cout<<"Node appended";
            }
            else{
                GetNode *ptr=head;
                while(ptr->next!=NULL)
                {
                    ptr=ptr->next;
                }
                ptr->next=newNode;
                cout<<"Node appended";
            }
        }
        void addAtBegin()
        {
            int data;
            cout <<"Enter data:";
            cin >>data;
            GetNode *newNode=new GetNode();
            newNode->data=data;
            if(head==NULL)
            {
                head=newNode;
                cout<<"Node appended";
            }
            else{
                newNode->next=head;
                head=newNode;
                cout<<"Node appended";
            }
        }
        void addAtPos()
        {
            int data,pos,flag=1;
            cout <<"Enter data:";
            cin >>data;
            cout <<"Enter position:";
            cin >>pos;
            GetNode *newNode=new GetNode();
            newNode->data=data;
            if(head==NULL)
            {
                head=newNode;
                cout <<"Node appended";
            }
            else{
                GetNode *ptr=head;
                while(ptr!=NULL)
                {
                    if(flag==pos-1)
                    {
                        newNode->next=ptr->next;
                        ptr->next=newNode;
                    }
                    ptr=ptr->next;
                    flag++;
                }
            }
        }
        void addAfterEle()
        {
            int data,ele;
            cout <<"enter data:";
            cin >>data;
            cout <<"Enter element after which you want to insert:";
            cin >>ele;
            GetNode *newNode=new GetNode();
            newNode->data=data;
            GetNode *ptr=head;
            if(head==NULL)
            {
                cout <<"Linked list does not exist";
            }
            else{
                while(ptr!=NULL)
                {
                    if(ptr->data == ele)
                    {
                        newNode->next=ptr->next;
                        ptr->next=newNode;
                        break;
                    }
                    ptr=ptr->next;
                }
            }

        }
        void display(){
            GetNode *ptr=head;
            cout <<endl;
            while(ptr!=NULL)
            {
                cout <<ptr->data <<"->";
                ptr=ptr->next;
            }
            cout <<"NULL"<<endl;
        }
        void deletee()
        {
            if(head==NULL)
            {
                cout <<"Linked list does not exist";
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
        void deleteBeg()
        {
            if(head==NULL)
            {
                cout <<"Linked list does not exist";
            }
            else{
                GetNode *ptr=head->next;
                head=ptr;
            }
        }
        void deletepos()
        {
            if(head==NULL)
            {
                cout <<"Linked list does not exist";
            }
            else{
                int pos,flag=1;
                cout <<"Enter position you want to delete";
                cin >>pos;
                GetNode *ptr=head;
                while(flag!=pos-1)
                {
                    ptr=ptr->next;
                    flag++;
                }
                GetNode *n=ptr->next;
                ptr->next=n->next;
            }
        }
};


int main()
{
    LinkedList obj;
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
            case 3:
                obj.addAtPos();
                break;
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
                obj.deletepos();
                break;
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