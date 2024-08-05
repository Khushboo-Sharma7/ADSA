#include <bits/stdc++.h>
using namespace std;

stack <int> monotonic(vector <int> v)
{
    stack <int> s;
    for(int i=0;i<v.size();i++)
    {
        if(s.empty()) s.push(v[i]);
        else
        {
            while(s.top()>v[i])
            {
                s.pop();
            }
            s.push(v[i]);
        }
    }
    return s;
}
void display_stack(stack <int> s)
{
    if(s.empty()) cout <<"stack is empty";
    while(!s.empty())
    {
        cout <<s.top();
        s.pop();
    }
}
int main()
{
    vector <int> v={5,4,7,3,8};
    display_stack(monotonic(v));

}