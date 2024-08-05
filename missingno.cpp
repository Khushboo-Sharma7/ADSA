#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int A[N-1];
    for(int i=0;i<N-1;i++)
    {
        cin>>A[i];
    }
    int max=*max_element(A,A+N-1);
    while(max!=0)
    {
        int ele=max;
        int flag=0;
        for(int i=0;i<N-1;i++)
        {
            if(A[i]==max)
            {
                flag++;
                break;
            }
        }
        if(flag==0)
        cout <<max;
        max--;
    }
}