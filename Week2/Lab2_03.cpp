#include<bits/stdc++.h>
using namespace std;

void sorting(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int k=a[i];
        int j=i-1;
        while(j>=0 && a[j]>k)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=k;
    }

}
int binary_search(int a[],int n,int k)
{
    int l=0,r=n-1;
    
    while(l<=r){
        int mid=(l+r)/2;
    if(a[mid]==k)
    {
        // cout<<mid<<endl;
        return mid;
        
    }
    else if(a[mid]>k)
    {
        r=mid-1;
    }
    else{
        l=mid+1;
    }
    }
    return -1;
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
      sorting(a,n);
    // for(int i=0;i<n;i++)
    //     cout<<a[i]<<" ";
    //     cout<<endl;
      int key;
      cin>>key;
      int c=0;
      for(int i=0;i<n-1;i++)
      {
          int sum = a[i]+key;
        //   cout<<sum<<endl;
          int res = binary_search(a,n,sum);
          if(res!=-1)
          {
              c++;
          }
      }
      cout<<c<<endl;

  }
return 0;
}