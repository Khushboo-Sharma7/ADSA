#include <bits/stdc++.h>
using namespace std;

class linkedList
{
    class node{
        public:
            int data;
            node *next;
            node(){
                data=0;
                next=NULL;
            }
            node(int data,node *next)
            {
                this->data=data;
                this->next=next;
            }
            node(int data)
            {
                this->data=data;
                this->next=NULL;
            }
    };
    public:
        node *head=NULL;
        void insertNode(int data)
        {
            node *newnode=new node(data);
            if(head==NULL)
            {
                head=newnode;
            }
            else{
                node *temp=head;
                while(temp->next!=NULL)
                {
                    temp=temp->next;
                }
                temp->next=newnode;
            }
        }
        void printl()
        {
            node *temp=head;
            if(head==NULL)
            cout <<"Empty list";
            else{
                while(temp!=NULL)
                {
                    cout <<temp->data <<"->";
                    temp=temp->next;
                }
                cout <<"NULL";
                cout<<endl;
            }
        }
        bool search(int k)
        {
            node *temp=head;
            if(head==NULL)
            return false;
            else{
                while(temp->next!=NULL)
                {
                    if(temp->data==k) return true;
                    temp=temp->next;
                }
            }
            return false;
        }
        void deletel(int k)
        {
            int c=0;
            node *temp=head;
            if(head==NULL) cout <<"Empty list";
            else{
                while(c!=k && temp->next!=NULL)
                {
                    c++;
                    temp=temp->next;
                }


            }
        }

};
int main()
{
    linkedList li;
    li.insertNode(3);
    li.insertNode(4);
    li.insertNode(5);
    li.insertNode(6);
    li.insertNode(7);
    cout <<endl;
    li.printl();
    cout <<endl;
    cout <<li.search(14);

}