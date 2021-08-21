#include<bits/stdc++.h>
using namespace std;

int cnt=0;


void linear_search(int a[],int l,int r,int k)
{
    // int cnt=0;
    for(int i=l;i<=r;i++)
    {
        
        if(a[i]==k)
        {
            cnt++;
            cout<<"Present "<<cnt<<endl;
            return ;
        }
        cnt++;
    }
    cout<<"Not present "<<cnt<<endl;
}
void exponential_search(int a[],int n,int k)
{
    if(a[0]==k)
    {
        cnt++;
        cout<<"present "<<cnt<<endl;
        return ;
    }
    else cnt++;
    int i=1;
    while(i<n && a[i]<=k)
    {
        i=i*2;
        cnt++;
    }

    linear_search(a,i/2,min(i,n-1),k);
}

int main(){
  int t;
  cin>>t;
  while(t--)
  {
      cnt=0;

      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
      }
      int key;
      cin>>key;
    exponential_search(a,n,key);

  }
return 0;
}