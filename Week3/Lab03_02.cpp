#include<bits/stdc++.h>
using namespace std;

void selection_sort(int a[],int n)
{
    int comp=0,swaps=0;
    for(int i=0;i<n-1;i++)
    {
      int small=a[i];
      int pos=i;
      for(int j=i+1;j<n;j++)
      {
          if(small>a[j])
          {
              small=a[j];
              pos=j;
            //   swaps++;
          }
          comp++;
      }

          a[pos]=a[i];
          a[i]=small;
          swaps++;
  
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Comparision "<<comp<<endl;
    cout<<"swapping "<<swaps<<endl;
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
      selection_sort(a,n);
  }
return 0;
}