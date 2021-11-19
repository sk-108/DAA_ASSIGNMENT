#include<bits/stdc++.h>
using namespace std;

bool checkpath(vector<int>adj[],int n,int node,int des,vector<int>&vis)
{
    vis[node]=1;
    for(auto it:adj[node])
    {
        
        if(vis[it]==0)
        {
         if(it==des)
        {
            return true;
        }
            if(checkpath(adj,n,it,des,vis))
            {
                return true;
            }
        }
    }
    return false;
}



int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    vector<int>adj[n+1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==1)
                adj[i+1].push_back(j+1);
        }
    }
    vector<int>vis(n+1,0);
    int src,des;
    cout<<"enter src and destination "<<endl;
    cin>>src>>des;
    if(checkpath(adj,n,src,des,vis))
    {
        cout<<"path exist "<<endl;
    }
    else{
        cout<<"Path doesn't exist "<<endl;
    }
}
/*
5
0 1 1 0 0
1 0 1 1 1
1 1 0 1 0
0 1 1 0 1
0 1 0 1 0
1 5
*/