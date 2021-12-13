#include<bits/stdc++.h>
using namespace std;

vector<int> shortest_path(vector<int>adj[],int src,int n)
{
    vector<int>vis(n,0);
    vector<int>dis(n,INT_MAX);
    queue<int>q;
    q.push(src);
    dis[src]=0;
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        vis[node]=1;
        for(auto it:adj[node])
        {
            if(vis[it]==0)
            {
                if(dis[it]>dis[node]+1){
                    dis[it]=dis[node]+1;
                    q.push(it);
                }
            }
        }
    }
    return dis;
}

int main()
{
    int e,n;
    cin>>n>>e;
    vector<int>adj[n];
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int src;
    cin>>src;
    vector<int>dist = shortest_path(adj,src,n);
    for(int i=0;i<n;i++)
    {
        cout<<dist[i]<<" ";
    }
}
/*
9 10
0 1
1 2
2 6
6 7
7 8
8 6
6 5
5 4
4 3
3 0
0
*/