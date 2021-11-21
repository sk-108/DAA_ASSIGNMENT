#include<bits/stdc++.h>
using namespace std;

int shortestpath(vector<pair<int,int>>adj[],int src,int des,int k)
{
    if(k==0 && src==des)
    {
        return 0;
    }
    if(k==1)
    {
        for(auto it:adj[src])
        {
            int node = it.first;
            int weight = it.second;
            if(node == des)
            {
                return it.second;
            }
        }
    }
    if(k<=0)
    {
        return -1;
    }
}

int main()
{
    int n,e;
    cin>>n>>e;
    vector<pair<int,int>>adj[n];
    for(int i=0;i<e;i++)
    {
        int u,v,wt;
        cin>>u>>v>>wt;
        adj[u].push_back(make_pair(v,wt));
        adj[v].push_back(make_pair(u,wt));
    }
    //used to find shortest path in weighted graph and undirected graph 
    int source,destination;
    cin>>source>>destination;
    int k;
    cout<<"Enter the k nodes "<<endl;
    cin>>k;
    cout<<"Weighted  of the shortest path is"<<shortestpath(adj,source,destination,k)<<endl;
}
/*
5
6
0 1 2 
1 4 5
4 2 1
2 3 3
3 0 1
1 2 4
0
*/