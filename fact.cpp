#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

//reverse of an array
int main()
{
    int n, arr[100];
    cout <<"enter the size of array:";
    cin >>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    cout <<"Reverse of array:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i] <<" ";
    }
}

//decimal to binary
/* int main()
{
    int arr[100],n,i=0;
    cout <<"ENter element:";
    cin >>n;
    while(n>0)
    {
        arr[i]=n%2;
        n/=2;
        i++;
    }
    cout <<"Binary of number-";
    for(int j=0;j<+i;j++)
    {
        cout<<arr[j] ;
    }
} */

//maximum and minimum and sort using inbuilt fuction
/* int main()
{
    int arr[]={5,6,89,4,2,1,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int j=0;j<n;j++)
    {
        cout<<arr[j] <<" " ;
    }
    cout <<endl;
    sort(arr,arr+n);
    for(int j=0;j<n;j++)
    {
        cout<<arr[j] <<" " ;
    }
    cout <<endl;
    cout<<"MAx element:"<<*max_element(arr,arr+n)<<endl;
    cout <<"Min element:" <<*min_element(arr,arr+n)<<endl;
} */

//maximum marks in semester
/* int main()
{
    int sem,sub;
    cout <<"Enter no of semester:"<<endl;
    cin >>sem;
    for(int i=1;i<=sem;i++)
    {
        cout <<"Enter no of subjects in " <<i <<" sem:"<<endl;
        cin >>sub;
        int marks[sub];
        cout <<"Enter marks:"<<endl;
        for(int i=0;i<sub;i++)
        {
            cin>>marks[i];
        }
        cout <<"Maximum marks in sem "<<i<<" is:" <<*max_element(marks,marks+sub)<<endl;
    }
} */

//next max element
/* int main()
{
    int n;
    cout <<"Enter length of array:";
    cin >>n;
    int arr[n],res[n];
    for(int i=0;i<n;i++)
    {
        cin >>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        int max=arr[i];
        for(int j=i+1;j<n;j++)
        {
            if(max<arr[j]){
                max=arr[j];
                break;
            }
        }
        res[i]=max;
    }
    for(int i=0;i<n;i++)
    {
        cout <<res[i]<<" ";
    }
} */

//stock span problem
/* int main()
{
    int n;
    cout <<"Enter length of array:";
    cin >>n;
    int arr[n],res[n];
    for(int i=0;i<n;i++)
    {
        cin >>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        res[i]=1;
        else
        res[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        cout <<res[i]<<" ";
    }
} */

//missing numbers in array
/* int main()
{
    int n;
    cout <<"Enter length of array:";
    cin >>n;
    int arr[n];
    for(int i=0;i<n-1;i++)
    {
        cin >>arr[i];
    }
    int ele=*max_element(arr,arr+n-1);
    while(ele>0)
    {
        int flag=0;
        for(int i=0;i<n-1;i++)
        {
            if(ele==arr[i])
            {
                flag++;
                break;
            }
        }
        if(flag==0){
            cout <<ele;
            break;
        }
        ele--;
    }
} */

//array clockwise
/* int main()
{
    int n,k,temp;
    cout <<"Enter length of array:";
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >>arr[i];
    }
    cout <<"Enter k:";
    cin >>k;
    for(int i=1;i<=k;i++)
    {
        int j=n-1;
        temp=arr[j];
        while(j>=0)
        {
            arr[j]=arr[j-1];
        j--;
        }
        arr[0]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout <<arr[i]<<" ";
    }
} */

//leader in array
/* int main()
{
    int n;
    cout <<"Enter length of array:";
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            break;
            if(j==n-1)
            cout<<arr[i]<<" ";
        }
    }
    cout <<arr[n-1];
} */

//factorial
/* int factorial(int);
int main()
{
    int n;
    cout <<"Enter number:";
    cin >>n;
    cout <<"Factorial of " <<n<<" is " <<factorial(n);
    return 0;
}
int factorial(int n)
{
    int fact=1;
    if(n==0 || n==1)
    return 1;
    else{
        fact= n*factorial(n-1);
    }
    return fact;
} */

//fibonacci series using recursion
/* int fibonacci(int );
void fibonacci_series(int);
int main()
{
    int n;
    cout <<"enter nno of elements ins series-";
    cin >>n;
    fibonacci_series(n);
}
void fibonacci_series(int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<fibonacci(i)<<" ";
    }
}
int fibonacci(int n)
{
    if(n<=1)
    return n;
    else
    {
        return fibonacci(n-1)+fibonacci(n-2);
    }
} */

//fibonacci series without recursion
/* int main()
{
    int n,f3;
    cout <<"Enter no of elemnts in series:";
    cin >>n;
    int f1=0;
    int f2=1;
    cout <<f1 <<" "<<f2 <<" ";
    n-=2;
    while(n!=0){
        f3=f1+f2;
        cout <<f3 <<" ";
        f1=f2;
        f2=f3;
        n--;

    }
} */

//sum of n natural numbers
/* int sum(int n)
{
    int res=0;
    if(n==1)
    return 1;
    else{
        res=n+sum(n-1);
        return res;
    }
}
int main()
{
    int n;
    cout <<"Enter n:";
    cin >>n;
    cout <<"Sum-" <<sum(n);
} */

//print number using recursion
/* void print(int n)
{
    if(n>0)
    {
        cout <<n <<" ";
        print(n-1);
    }
}
int main()
{
    int n;
    cout <<"Enter number-";
    cin >>n;
    print(n);
} */

//power of a number
/* int power(int,int);
int main()
{
    int base,exp;
    cout <<"Enter base and exponent:" <<endl;
    cin >>base >>exp;
    cout <<"Power:" <<power(base,exp);
}
int power(int base,int exp)
{
    if(exp==0)
    return 1;
    else
    return base*power(base,exp-1);
} */

//multiplication of two number 
/* int mul(int,int);
int main()
{
    int a,b;
    cout <<"Enter two numbers-";
    cin >>a >>b;
    cout <<mul(a,b);
}
int mul(int a,int b)
{
    if(b==1)
    {
        return a;
    }
    if(b==0)
    {
        return 0;
    }
    else{
        b--;
        return a+mul(a,b);
    }
} */

//table printing
/* void table(int n,int i)
{
    if(i<=10)
    {
        cout <<n*i <<" ";
        table(n,i+1);
    }
}
int main()
{
    int n,i=1;
    cout <<"Enter n:";
    cin >>n;
    table(n,i);
}
 */

//power of four
/* bool power(int n)
{
    for(int i=2;i<n/4;i++)
    {
        cout <<"tt";
        if(pow(i,4)==n)
        return true;
        else
        {
            if(pow(i,4)>n)
            {
                break;
            }
        }
    }
    return false;
}
int main(){
    int n;
    cin >>n;
    cout <<power(n);
    return 0;
} */

//no of 1 bits
/* int main()
{
    char arr[32];int c;
    cout <<"Enter interger in binary:";
    cin>>arr;
    int i=0;
    while(arr[i]!='\0')
    {
        c++;
        i++;
    }
    if(c==32)
    {
        int n=sizeof(arr)/sizeof(arr[0]),c=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]=='1')
            c++;
        }
        cout <<"number of 1 bits:" <<c;
    }
    else{
        cout <<"Enter 32 bits";
    }
} */

//no of operation required to make two string same
/* int main()
{
    int flag=0;
    char s1[]="kkkjkk";
    char s2[]="kkk";
    int i,j;
    int len1=sizeof(s1)/sizeof(s1[0]);
    int len2=sizeof(s2)/sizeof(s2[0]);
    if(len1==len2)
    {
        for(i=0;i<len1;i++)
        {
            if(s1[i]!=s2[i])
            flag+=1;
        }
    }
    else if(len1>len2){
        flag=len1-len2;
    }
    else{
        flag=len2-len1;
    }
    cout<<"operations required-"<<flag; 
} */

//linearsearch
/* int lsearch(int arr[],int key,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return 0;
}
int main(){
    int n,k;
    cout <<"Enter size of array:";
    cin >>n;
    int arr[n];
    cout <<"Enter array elements:";
    for(int i=0;i<n;i++)
    {
        cin >>arr[i];
    }
    cout <<"Enter key:";
    cin >>k;
    int res=lsearch(arr,k,n);
    if(res!=0)
    cout <<"Element found at "<<res <<" index";
    else
    cout <<"Element not found";
} */

//subarrays
/* int main()
{
    int n,p,start,end;
    cout <<"Enter array length:";
    cin >>n;
    int arr[n];
    cout <<"enter array-";
    for(int i=0;i<n;i++)
    {
        cin >>arr[i];
    }
    cout <<"enter sum:";
    cin >>p;
    //subarrays sum should be equal to key
    for(int i=0;i<n;i++ )
    {
        start=i;
        for(int j=0;j<n;j++)
        {
            end=j;
            int sum=0;
            for(int k=start;k<=end;k++ )
            {
                cout <<arr[k]<<" ";
                sum+=arr[k];
            }
            if(sum==p)
            cout <<"true";
            cout <<endl;
        }
        cout <<endl;
    }
} */

//Binary search
/* int bsearch(int arr[],int key,int n)
{
    int start=0,end=n-1,mid;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid]==key) return mid;
        if (key>arr[mid]) start=mid+1;
        else end=mid-1;
    }
    return 0;
}
int main(){
    int n,k;
    cout <<"Enter size of array:";
    cin >>n;
    int arr[n];
    cout <<"Enter array elements:";
    for(int i=0;i<n;i++)
    {
        cin >>arr[i];
    }
    cout <<"Enter key:";
    cin >>k;
    int res=bsearch(arr,k,n);
    if(res!=0)
    cout <<"Element found at "<<res <<" index";
    else
    cout <<"Element not found";
} */

//SORTING

//bubble sorting
/* int main()
{
    int n,temp;
    cout <<"enter size of array:";
    cin >>n;
    int arr[n];
    cout <<"Enter array elements:";
    for(int i=0;i<n;i++)
    {
        cin >>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])//> for ascending and < for descending
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout <<arr[i]<<" ";
    }
} */

//insertion sort
/* int main()
{
    int n,temp;
    cout <<"enter size of array:";
    cin >>n;
    int arr[n];
    cout <<"Enter array elements:";
    for(int i=0;i<n;i++)
    {
        cin >>arr[i];
    }
    for(int i=1;i<n;i++)
    {
        temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout <<arr[i]<<" ";
    }
} */

//selection sort
/* int main()
{
    int n,min,temp;
    cout <<"enter size of array:";
    cin >>n;
    int arr[n];
    cout <<"Enter array elements:";
    for(int i=0;i<n;i++)
    {
        cin >>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {   
            if(arr[min]>arr[j])
            min=j;
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout <<arr[i]<<" ";
    }
} */

//merge sort

//complete file
//stack
/* #include <iostream>
#include <stdlib.h>
using namespace std;
#define CAPACITY 10
int stack[CAPACITY];
int top=-1;

int isFull()
{
    if(top==CAPACITY-1)
    return 1;
    else
    return 0;
}
int isEmpty(){
    if(top==-1)
    return 1;
    else
    return 0;
}
void push(){
    int ele;
    cout <<"\nEnter element to be pushed:";
    cin>>ele;
    if(isFull())
    cout <<"S\ntack is full";
    else{
        stack[++top]=ele;
    }
}
void pop(){
    if (isEmpty())
    cout <<"\nStack is empty";
    else {
        int ele=stack[top];
        top--;
        cout <<ele<<" popped out of stack";
    }
}
void peek()
{
    if(isEmpty())
    cout <<"\nStack is empty";
    else
    cout <<stack[top];
}
void traverse()
{
    if(isEmpty())
    cout <<"\nStack is empty";
    int temp=top;
    while(temp!=-1)
    {
        cout <<stack[temp]<<endl;
        temp--;
    }
}
int main()
{
    int n;
    while(1)
    {
        cout <<"\n1.Push";
        cout <<"\n2.pop";
        cout <<"\n3.peek";
        cout <<"\n4.Traverse";
        cout <<"\n0.Exit";
        cout <<"\nEnter input:"<<endl;
        cin>>n;
        switch (n)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            traverse();
            break;
        case 0:
            exit(0);
            break;
        default:
            cout <<"Invalid input";
            break;
        }
    }
} */

//queue
/* #include <stdio.h>
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
} */

//mobile using stack and queue
/* #define CAPACITY 10
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
} */

