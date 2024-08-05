#include <bits/stdc++.h>
using namespace std;

stack <int> incMon(vector <int> v,int n)
{
    stack <int> s;
    for(int i=0;i<n;i++)
    {
        while(!s.empty() && s.top()>v[i])
        {
            s.pop();
        }
        s.push(v[i]);
    }
    return s;
}

stack <int> decMon(vector <int> v,int n)
{
    stack <int> s;
    for(int i=0;i<n;i++)
    {
        while(!s.empty() && s.top()<v[i])
        {
            s.pop();
        }
        s.push(v[i]);
    }
    return s;
}

vector <int> nge(vector <int> v,int n)
{
    stack <int> s;
    vector <int> res(n-1,-1);
    for(int i=0;i<n;i++)
    {
        while(!s.empty() && s.top()<=v[i])
        {
            s.pop();
        }
        s.push(v[i]);
    }
    return res;
}

int main()
{
    vector <int> arr={13, 8, 1, 5, 2, 5, 9, 7, 6, 12};
    stack <int> s1=incMon(arr,arr.size());
    while(!s1.empty())
    {
        cout <<s1.top() <<" ";
        s1.pop();
    }
    cout <<endl;
    stack <int> s2=decMon(arr,arr.size());
    while(!s2.empty())
    {
        cout <<s2.top() <<" ";
        s2.pop();
    }
    cout <<endl;
    vector <int> v1=nge(arr,arr.size());
    for(int x:v1)
    {
        cout <<x<<" ";
    }
}