#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>p,pair<int,int>q)
{
    return p.first > q.first;
}
int main()
{
    vector<pair<int,int>>job;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int p,d;
        cin>>p>>d;
        job.push_back(make_pair(p,d));
    }
    sort(job.begin(),job.end(),cmp);
    int maxend =0;
    for(int i=0;i<n;i++)
    {
        if(maxend<job[i].second)
        {
            maxend = job[i].second;
        }
    }
    vector<int>dist(maxend,-1);
    for(int i=0;i<n;i++)
    {
        int j = job[i].second-1;
        while(j>=0 && dist[j]!=-1)j--;
        if(j>=0 && dist[j]==-1)
            dist[j]=job[i].first;
    }
    int maxprofit = 0;
    int count = 0;
    for(int i=0;i<maxend;i++)
    {
            maxprofit+=dist[i];
            // cout<<dist[i]<<" ";
            count++;
    }
    cout<<count<<" ";
    cout<<endl;
    cout<<maxprofit<<" ";

}
/*
5
100 2
19 1
27 2
25 1
15 3
*/