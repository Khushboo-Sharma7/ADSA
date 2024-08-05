#include <iostream>
using namespace std;

class BTree
{
    class GetNode{
        public:
        int data;
        GetNode *next;
        GetNode *prev;
        GetNode(int key)
        {
            data=key;
            next=NULL;
            prev=NULL;
        }
    };
    public:
    GetNode *root=NULL;
    void insert(int key){
        root=insertT(root,key);
        cout<<"Node added"<<endl;
    }
    GetNode *insertT(GetNode *root,int key)
    {
        if(root==NULL)
        {
            root=new GetNode(key);
            return root;
        }
        if(key>root->data)
        {
            root->next=insertT(root->next,key);
        }
        else
        root->prev=insertT(root->prev,key);
        return root;
    }
    void inOrder(){
        cout <<"\nInorder Traversing:";
        inOrderT(root);
    }
    void inOrderT(GetNode *root){
        if(root!=NULL)
        {
            inOrderT(root->prev);
            cout<<root->data<<"->";
            inOrderT(root->next);
        }
    }
    void preOrder(){
        cout <<"\nPreOrder Traversing:";
        preOrderT(root);
    }
    void preOrderT(GetNode *root)
    {
        if(root!=NULL)
        {
            cout <<root->data<<"->";
            preOrderT(root->prev);
            preOrderT(root->next);
        }
    }
    void postOrder(){
        cout <<"\nPostorder traversal";
        postOrderT(root);
    }
    void postOrderT(GetNode *root)
    {
        if(root!=NULL)
        {
            postOrderT(root->prev);
            postOrderT(root->next);
            cout<<root->data<<"->";
        }
    }
    void search(){
        int key;
        cout <<"Enter key to be searched:";
        cin >>key;
        searchT(root,key);
    }
    void searchT(GetNode *root,int key)
    {
        if(root->data==key)
        {
            cout <<"Key found";
        }
        else if (key>root->data)
        {
            root=
        }
        
    }
    
};
int main(){
    BTree obj;
    int arr[]={6,26,46,21,31,11,24,4,56,51,66};
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        obj.insert(arr[i]);
    }
    obj.inOrder();
    obj.preOrder();
    obj.postOrder();
}