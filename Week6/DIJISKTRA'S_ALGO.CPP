#include<bits/stdc++.h>
using namespace std;
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
    int source;
    cin>>source;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    vector<int>disto(n,INT_MAX);
    disto[source]=0;
    pq.push(make_pair(0,source));

    while(!pq.empty())
    {
        int dist = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        for(auto it:adj[node])
        {
            int nextdist = it.first;
            int nextweight = it.second;
            if(disto[nextdist]>nextweight+disto[node])
            {
                disto[nextdist] = nextweight+disto[node];
                pq.push(make_pair(disto[nextdist],nextdist));
            }
        }
    }
    cout<<"The distance from source node to every node is "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<" 0 "<<i<<" -> "<<disto[i]<<endl;
    }

    
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