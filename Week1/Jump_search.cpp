#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int jump_search(vector<int>a,int k)
{
    int n=a.size();
   sort(a.begin(),a.end());
   int step = sqrt(n);
   int prev=0;
   while(a[min(step,n)]<k)
   {
       prev=step;
       step+=sqrt(n);
       if(prev>=n){
           return -1;
       }
   }
   while(a[prev]<k)
   {
       prev++;
       if(prev > min(step,n))
       {
           return -1;
       }
   }
   if(a[prev]==k)
   {
       return prev;
   }
   return -1;
}
int main()
{
    int t;
    cout<<"enter the no of test cases"<<endl;
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"Enter the size of the array"<<endl;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int k;
        cout<<"Enter the element to search "<<endl;
        cin>>k;
        cout<<"index of element is "<<jump_search(a,k)<<endl;
    }
}
