#include<bits/stdc++.h>
using namespace std;

void  binary_search(int a[],int n,int k)
{
    int l=0,r=n-1,cnt=0;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        cnt++;
        if(a[mid]==k)
        {
            cout<<"Present "<<cnt<<endl;
            return ;
        }
        else if(a[mid] > k)
        {
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<<"Not present "<<cnt<<endl;
}

int main(){
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
      }
      int key;
      cin>>key;
     binary_search(a,n,key);

  }
return 0;
}