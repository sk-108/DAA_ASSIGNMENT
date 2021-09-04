#include<bits/stdc++.h>
using namespace std;

void common(int a[],int n,int b[],int  m)
{
    
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            i++;
        }
        else if(a[i]>b[j])
        {
            j++;
        }
        else if(a[i]==b[j])
        {
            cout<<a[i]<<" ";
            i++;

            j++;
        }
    }
}

int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  int m;
  cin>>m;
  int b[m];
  for(int j=0;j<m;j++)
  {
      cin>>b[j];
  }
  common(a,n,b,m);
return 0;
}