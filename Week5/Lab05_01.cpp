#include<bits/stdc++.h>
using namespace std;

void count(char a[],int n)
{
    int c[256]={0};
    for(int i=0;i<n;i++)
    {
        c[a[i]]++;
    }
    int max=0,pos=0;
    for(int i=97;i<=122;i++)
    {
        if(c[i]>max)
        {
             max=c[i];
             pos=i;
        }
    }
    if(max==1)
    {
        cout<<"NO Duplicate element "<<endl;
    }
    else
    cout<<char(pos)<<"-"<<max<<endl;

}

int main(){
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;   
      char c[n];
      for(int i=0;i<n;i++)
      {
          cin>>c[i];
      }
      count(c,n);

  }
return 0;
}
/*
10 
a e d w a d q a f p
*/