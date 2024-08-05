
#include <bits/stdc++.h>
using namespace std;

class node
{
    public:
        int data;
        node *left;
        node *right;
        node(int data){
            this->data=data;
            this->left=NULL;
            this->right=NULL;
        }
};
node *dummy_tree()
{
    node *root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    return root;

}
void Itraversal(node *root)
{
    if(root==NULL)
    {
        return;
    }
    Itraversal(root->left);
    cout <<root->data <<" ";
    Itraversal(root->right);
}
void pretraversal(node *root)
{
    if(root==NULL)
    {
        return;
    }
    cout <<root->data <<" ";
    pretraversal(root->left);
    pretraversal(root->right);
}
void posttraversal(node *root)
{
    if(root==NULL)
    {
        return;
    }
    posttraversal(root->left);
    posttraversal(root->right);
    cout <<root->data <<" ";
}

void leveltraversal(node *root)
{
    if(root==NULL) 
    {
        cout <<"empty tree";
        return;
    }
    queue <node *> q;
    q.push(root);
    while(!q.empty())
    {
        int level=q.size();
        for(int i=0;i<level;i++)
        {
            node *temp=q.front();
            cout <<temp->data;
            if(temp->left)
            {
                q.push(temp->left);
            } 
            if(temp->right)
            {
                q.push(temp->right);
            }
            q.pop();
        }
        cout <<endl;
    }
}

void leveltraversalOPP(node *root)
{
    if(root==NULL) 
    {
        cout <<"empty tree";
        return;
    }
    queue <node *> q;
    q.push(root);
    while(!q.empty())
    {
        node *temp=q.front();
        cout <<temp->data <<" ";
        if(temp->right)
        {
            q.push(temp->right);
        }
        if(temp->left)
        {
            q.push(temp->left);
        } 
        q.pop();

    }
}

void alterLeveTraversal(node *root)
{
    if(root==NULL) 
    {
        cout <<"empty tree";
        return;
    }
    queue <node *> q;
    q.push(root);
    int c=0;
    while(!q.empty())
    {
        node *temp=root;
    }
}
void traversal(node *root,string level)
{
    if(root==NULL)
    {
        return;
    }
    if(level=="pre"){
        cout <<root->data <<" ";
        traversal(root->left,level);
        traversal(root->right,level);
    }
    if(level=="post")
    {
        traversal(root->left,level);
        traversal(root->right,level);
        cout <<root->data <<" ";
    }
    if(level=="in")
    {
        traversal(root->left,level);
        cout <<root->data <<" ";
        traversal(root->right,level);
    }
}

int height(node *root)
{
    if(root==NULL) return -1;
    int leftH=height(root->left);
    int rightH=height(root->right);
    return (max(leftH,rightH))+1;
}

int width(node *root)
{
    if(root==NULL) return 0;
    queue <node *> q;
    q.push(root);
    int maxNodes=0;
    while(!q.empty())
    {
        node *temp=q.front();
        int level=q.size();
        int c=0;
        for(int i=0;i<level;i++)
        {
            if(temp->left)
            {
                q.push(temp->left);
                c++;
            }
            if(temp->right)
            {
                q.push(temp->right);
                c++;
            }
            q.pop();
        }
        maxNodes=(c>maxNodes)?c:maxNodes;
    }
    return maxNodes;
}

int main()
{
    node *root=dummy_tree();
    /* Itraversal(root);
    cout <<endl;
    pretraversal(root);
    cout <<endl;
    posttraversal(root);
    cout <<endl;
    traversal(root,"pre");
    cout <<endl;
    traversal(root,"post");
    cout <<endl;
    traversal(root,"in");
    cout <<endl; */
    
    /* leveltraversalOPP(root);
    cout <<endl;
    alterLeveTraversal(root); */
    leveltraversalOPP(root);
    cout <<endl;
    leveltraversal(root);
    cout <<endl;
    cout<<height(root);
    cout <<endl;
    cout <<width(root);
    
}