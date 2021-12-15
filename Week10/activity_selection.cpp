#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>mp;
    for(int i=0;i<n;i++)
    {
        int f,e;
        cin>>f>>e;
        mp.push_back(make_pair(e,f));
    }
    sort(mp.begin(),mp.end());
    int currentend = -1;
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(mp[i].second>currentend)
        {
            currentend = mp[i].first;
            count++;
        }
    }
    cout<<count<<endl;
}