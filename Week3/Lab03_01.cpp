#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int a[],int n)
{
    int comp=0,shift=0;
    for(int i=1;i<n;i++)
    {
        int k=a[i];
        int j=i-1;
        while(j>=0 && a[j]>k)
        {
            comp++;
           
            a[j+1]=a[j];
            j=j-1;
             shift++;
        }
        a[j+1]=k; 
        shift++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Comparision "<<comp<<endl;
    cout<<"shifting "<<shift<<endl;
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
      insertion_sort(a,n);
  }
return 0;
}