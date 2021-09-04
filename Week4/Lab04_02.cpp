#include<bits/stdc++.h>
using namespace std;
int comp=0;
int swapp=0;
void swap(int a[],int i,int j)
{
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    swapp++;
}
int  partition(int a[],int l,int r)
{
    int pivot = a[r];
    int pindex = l-1 ;
    for(int i=l;i<r;i++)
    {
        if(a[i]<=pivot)
        {
            pindex++;
            swap(a,pindex,i);
            // swapp++;
            
        }
        comp++;
        
    }
    swap(a,pindex+1,r);
    return pindex+1;
}

void quick_sort(int a[],int l,int r)
{
    if(l<r)
    {
        int pindex=partition(a,l,r);
        // quick_sort(a,l,r);
        quick_sort(a,l,pindex-1);
        quick_sort(a,pindex+1,r);

    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
        comp=0;
        swapp=0;
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  quick_sort(a,0,n-1);
  for(int i=0;i<n;i++)
  {
      cout<<a[i]<<" ";
  }
  cout<<endl;
  cout<<"comparisions "<<comp<<" ";
  cout<<endl;
  cout<<"swaps "<<swapp<<" ";
  cout<<endl;
    }
return 0;
}

/*
8
8 7 6 5 3 4 2 1
*/