#include<bits/stdc++.h>
using namespace std;

int count(int ind,int sum,int n,vector<int>v,vector<vector<int>>&dp)
{
    if(sum==0)
    {
        return 1;
    }
    if(ind>=n || sum<0)
    {
        return 0;
    }
    if(dp[ind][sum]!=-1)return dp[ind][sum];
    int left = count(ind,sum-v[ind],n,v,dp);
    int right = count(ind+1,sum,n,v,dp);
    dp[ind][sum] = left+right;
    return dp[ind][sum];
    
}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int sum ;
    cin>>sum;
    vector<vector<int>>dp(n,vector<int>(sum+1,-1));
    cout<<count(0,sum,n,v,dp);
}