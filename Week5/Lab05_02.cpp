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
    int pindex=l-1;
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

void sort(int a[],int l,int r)
{
    if(l<r)
    {
        int pindex= partition( a, l, r);
        sort(a,l,pindex-1);
        sort(a,pindex+1,r);
    }
}


void target(int a[],int n,int k)
{
    sort(a,0,n-1);
    int p=0,q=n-1;
    vector<int>ans;
    while(p<q)
    {
        int sum=a[p]+a[q];
        if(sum>k)
        {
            q--;
        }
        else if(sum<k){
            p++;
        }
        else {
            ans.push_back(a[p]);
            // cout<<a[p]<<endl;
            ans.push_back(a[q]);
            p++;
        }
    }
    if(ans.size()!=0){
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<"  ";
    }
    }
    else{
        cout<<"Not Present ";
    }
    cout<<endl;
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

  target(a,n,k);
    // sort(a,0,n-1);
    }
return 0;
}
