#include <bits/stdc++.h>
using namespace std;

//ADJACENCY LIST

void print_adj_list_vvi(vector<vector<int>> vvi,unordered_map<int,int> index_map)
{
    int i=0;
    for(vector<int> edge:vvi)
    {
        cout <<i<<" "<<index_map[i]<<"->";
        for(int x:edge)
        {
            cout <<x<<" ";
        }
        cout <<endl;
        i++;
    }
}
//adjacency list using only vector of vector if vertices are 0-indexed
vector<vector<int>> make_adj_list_vvi_0index(int v, vector<vector<int>>edges) {
        vector<vector<int>> res(v);//can directly initialise vector of V vectors because no key is required here
        for(vector<int> x:edges)
        {
            res[x[0]].push_back(x[1]);
            res[x[1]].push_back(x[0]);
            
        }
        return res;
}

//adjacency list using vector of vector if vertices can be anything
vector<vector<int>> make_adj_list_vvi(int v, vector<vector<int>>edges)
{
    unordered_map <int,int> index_map;
    vector<vector<int>> res(v);
    int i=0;
    for(vector<int> x:edges)
    {
        if(index_map.find(x[0])==index_map.end())
        {
            index_map[i]=x[0];
            res[i].push_back(x[0]);
            i++;
        }
        if(index_map.find(x[1])==index_map.end())
        {
            index_map[i]=x[1];
            res[i].push_back(x[1]);
            i++;
        }
    }
    print_adj_list_vvi(res,index_map);
    return res;

}

int main()
{
    int v=6;
    vector<vector<int>> edges={{10,20},{10,30},{10,40},{20,50},{20,60},{30,60},{40,50}};
    map<int,vector<int>> mv=make_adj_list(v,edges);
    print_adj_list(mv);
    make_adj_list_vvi(v,edges);

}