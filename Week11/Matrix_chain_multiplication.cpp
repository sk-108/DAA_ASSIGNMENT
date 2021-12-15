#include<bits/stdc++.h>
using namespace std;

int mcm(int mat[],int i,int j,vector<vector<int>> &dp)
{
    if(i==j)return 0;
    int min=INT_MAX;
    if(dp[i][j]!=-1)return dp[i][j];
    for(int k=i;k<j;k++)
    {
        int count = mcm(mat,i,k,dp)+mcm(mat,k+1,j,dp)+mat[i-1]*mat[k]*mat[j];
        if(count<min)
        {
            min = count;
        }
    }
    dp[i][j]=min;
    return dp[i][j];
}

int main()
{
    int n;
    cin>>n;
    int mat[n];
    for(int i=0;i<n;i++)
    {
        // for(int j=0;j<n;j++)
            cin>>mat[i];
    }
    vector<vector<int>>dp(n,vector<int>(n,-1));
    cout<<mcm(mat,1,n-1,dp);
}