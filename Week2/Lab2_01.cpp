#include<bits/stdc++.h>
using namespace std;

int search(vector<int>a,int n,int k,int o)
{
    int l=0,r=n-1,mid,res=-1;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(a[mid]==k)
        {
            res=mid;
            if(o==1)
            {
          
                r=mid-1;
            }
            else if(o==2){
            
                l=mid+1;
            }
        }
        else if(a[mid]>k)
        {
            r=mid-1;
        }
        else {
            l=mid+1;
        }
        
    }
    return res;
}

int main(){
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      vector<int>a(n);
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
      }
      int key;
      cin>>key;
    //   cout<<"first ocurrence "<<endl;
      int l=search(a,n,key,1);
    //   cout<<"last ocurrence "<<endl;
      int r=search(a,n,key,2);
      if(l==-1 || r==-1 )
      {
          cout<<"Not present "<<endl;
      }
      else{
        //   cout<<l<<" "<<r<<endl;
          cout<<key<<"-"<<(r-l+1)<<endl;
      }
  }
  
return 0;
}

/* 1
7
 2 4 10 10 10 18 20
 */