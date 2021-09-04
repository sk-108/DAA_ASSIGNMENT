#include<bits/stdc++.h>
using namespace std;


void swap(int a[],int l,int r)
{
    int temp=a[l];
    a[l]=a[r];
    a[r]=temp;

}
int partition(int a[],int l,int r)
{
    int pivot=a[r];
    int pindex = l-1;
    for(int i=l;i<r;i++)
    {
        if(a[i]<pivot)
        {
            pindex++;
            swap(a,i,pindex);
        }
    }
    pindex++;
    swap(a,pindex,r);
    return pindex;
}

void quick_sort(int a[],int l,int r,int k)
{
    
    if(l<r)
    {
        int pindex = partition(a,l,r);
       if(pindex>k-1){
        quick_sort(a,l,pindex-1,k);
       }
      else   if(pindex<k-1){
        quick_sort(a,pindex+1,r,k);
      }
      else{
          return ;
      }
    }




}

int main(){
  int t;
  cin>>t;
  while(t--){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
 int k;
 cin>>k;
 quick_sort(a,0,n-1,k);
cout<<a[k-1]<<endl;
  }
return 0;
}
/*
10
123 656 54 765 344 514 765 34 765 234 
15
43 64 13 78 864 346 786 456 21 19 8 434 76 270 601
*/
