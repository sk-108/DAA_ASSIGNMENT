#include<bits/stdc++.h>
using namespace std;

int cnt=0;

void binary_search(int a[],int l,int r,int k)
{
    if(l<=r){

  
    int mid = l+(r-l)/2;
    if(a[mid]==k)
    {
          cnt++;
        cout<<"Present "<<cnt<<endl;
    }
    else if(a[mid]<k)
    {
          cnt++;
        binary_search(a,mid+1,r,k);
    }
    else {
          cnt++;
        binary_search(a,l,mid-1,k);
    }
    }
    else{
        cout<<"Not present "<<cnt<<endl;
        return ;
    }

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
     binary_search(a,0,n-1,key);

  }
return 0;
}