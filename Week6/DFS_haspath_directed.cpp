#include<bits/stdc++.h>
using namespace std;
// vector<int>vis(1000);
int vis[1000]={0};
vector<int>adj[1000];

void dfs(int src)
{
    if(vis[src]==0)
    {
        vis[src]=1;
        for(int i=0;i<adj[src].size();i++)
        {
            if(vis[adj[src][i]]==0)
            {
                dfs(adj[src][i]);
            }
        }
        // for(auto it : adj[src])
        // {
        //     if(vis[it]==0)
        //     {
        //         dfs(it);
        //     }
        // }
    }
}

int main(){
  int e;
  cin>>e;
//   vector<int>adj[n];
  for(int i=0;i<e;i++)
  {
      int u,v;
      cin>>u>>v;
      adj[u].push_back(v);
  }
  int src,des;
  cout<<"Enter the source and destination "<<endl;
  cin>>src>>des;
  dfs(src);
  if(vis[des]==1)
  {
      cout<<"Path exist "<<endl;
  }
  else{
      cout<<"Path doesn't exist "<<endl;
  }

return 0;
}