#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int l,int mid,int r)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int ar[n1],b[n2];
    for(int i=0;i<n1;i++)
    {
        ar[i]=a[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        b[j]=a[mid+1+j];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2)  
    {
        if(ar[i]<b[j])
        {   
            a[k]=ar[i];
            k++;
            i++;
        }
        else{
            a[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<n1)
    {
        a[k]=ar[i];
        k++;
        i++;
    }
    while(j<n2)
    {
        a[k]=b[j];
        k++;
        j++;
    }
}

void merge_sort(int a[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        merge_sort(a,l,mid);
        merge_sort(a,mid+1,r);
        merge(a,l,mid,r);   
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
      merge_sort(a,0,n-1);
      int f=0;
      for(int i=0;i<n-1;i++)
      {
        //   cout<<a[i]<<" ";
          if(a[i]==a[i+1])
          {
              f=1;
              break;
          }
      }
      cout<<endl;
      if(f==1)
      {
          cout<<"YES"<<endl;
      }
      else{
          cout<<"NO"<<endl;
      }
      
  }
return 0;
}