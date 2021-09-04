#include<bits/stdc++.h>
using namespace std;

void count_sort(int a[],int n)
{
    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    int count[max+1]={0};
    for(int i=0;i<n;i++)
    {
        count[a[i]]++;
    }
    for(int i=1;i<=max;i++)
    {
        count[i]+=count[i-1];
    }
    // for(int i=0;i<=max;i++)
    // cout<<count[i]<<" ";
    // cout<<endl;
    int res[n];
    for(int i=n-1;i>=0;i--)
    {
        res[--count[a[i]]]=a[i];
    }
    for(int i=0;i<n;i++)
        a[i]=res[i];

}

int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  count_sort(a,n);
  for(int i=0;i<n;i++)
  {
      cout<<a[i]<<" ";
  }

return 0;
}
/*
9
1 3 2 3 4 1 6 4 3
*/