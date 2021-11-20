#include<bits/stdc++.h>
using namespace std;

bool detectcycle(vector<int>&vis,vector<int>adj[],int node,int parent)
{
    vis[node]=1;
    for(auto it:adj[node])
    {
        if(vis[it]==0)
        {
            if(detectcycle(vis,adj,it,node))
            {
                return true;
            }
        }
        else if(it!=parent)
        {
            return true;
        }
    }
    return false;
}


bool check_cycle(vector<int>adj[],int n)
{
    vector<int>vis(n,0);
    for(int i=0;i<n;i++)
    {
        if(vis[i]==0)
        {
            if(detectcycle(vis,adj,i,-1))
            {
                return true;
            }
        }
    }
    return false;
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
    if(check_cycle(adj,n))
    {
        cout<<"cycle exist"<<endl;
    }
    else{
        cout<<"cycle doesn't exist "<<endl;
    }


}