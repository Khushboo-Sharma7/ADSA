#include <bits/stdc++.h>
using namespace std;
#define vvi vector<vector<int>>
#define vi vector<int>

vvi adj_m(int v,vvi edges)
{
    //unweighted undirected
    /* vvi res(v,vi(v,0));
    for(vi edge:edges)
    {
        res[edge[0]][edge[1]]=1;
        res[edge[1]][edge[0]]=1;
    }
    return res; */

    //weighted undirected
    /* vvi res(v,vi(v,0));
    for(vi edge:edges)
    {
        res[edge[0]][edge[1]]=edge[2];
        res[edge[1]][edge[0]]=edge[2];
    } */

    //weighted directed
    vvi res(v,vi(v,0));
    for(vi edge:edges)
    {
        res[edge[0]][edge[1]]=edge[2];
        if(edge[0]!=edge[1])
        {
            res[edge[1]][edge[0]]=edge[2];
        }
    }
    return res;
}

map<int,vi> make_adj_l(int v,vvi edges)
{
    map<int,vi> res;
    for(int i=0;i<v;i++)
    {
        res[i]=vi();
    }
    for(vi edge:edges)
    {
        res[edge[0]].push_back(edge[1]);
        if(edge[0]!=edge[1])
        {
            res[edge[1]].push_back(edge[0]);
        }
    }
    return res;
}

vector<int> bfs(map<int,vi> res)
{
    queue <int> q;
    q.push(res[0]);
    while(!q.empty())
    {
        
    }
}


//mimii  weighted
map<int,map<int,int>> make_adjList(int v,vvi edges)
{
    map<int,map<int,int>> res;


}

void graph()
{
    int v=7;
    vvi edges={{0,1,3},{0,2,4},{0,3,5},{1,4,7},{1,5,6},{2,5,8},{3,4,4}};
    adj_m(v,edges);
    make_adj_l(v,edges);
}

int main()
{
    graph();
}