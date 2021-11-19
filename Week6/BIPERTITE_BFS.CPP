#include<bits/stdc++.h>
using namespace std;

bool check_cycle(vector<int>adj[],int n,int src,vector<int>vis)
{
    queue<int>q;
    q.push(src);
    vis[src]=1;
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        for(auto it:adj[node])
        {
            if(vis[it]==-1)
            {
                q.push(it);
                vis[it]=1-vis[node];
            }
            else if(vis[node]==vis[it])
            {
                return false;
            }
        }
    }
    return true;
}

int main(){
//   int n;
//   cin>>n;
//   int mat[1000][1000];
//   for(int i=0;i<n;i++)
//   {
//       for(int j=0;j<n;j++)
//       {
//           cin>>mat[i][j];
//       }
//   }
//   vector<int>adj[n];
//   for(int i=0;i<n;i++)
//   {
//       for(int j=0;j<n;j++)
//       {
//           adj[i].push_back(j);
//       }
//   }
int n,e;
cin>>n>>e;
vector<int>adj[n];
for(int i=0;i<e;i++){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
}

  vector<int>vis(n,-1);

  if(check_cycle(adj,n,0,vis))
  {
      cout<<"Yes Bipertite "<<endl;
  }
  else{
      cout<<"NO Bipartite"<<endl;
  }
return 0;
}
/*
8
8
0 1
1 2
2 3
3 4
4 7
4 5
5 6
6 1
*/