#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int Binary_search(vector<int>a,int k){
    sort(a.begin(),a.end());
    int l=0,r=a.size()-1,mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(a[mid]==k)
        {
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
        cout<<"index of element is "<<Binary_search(a,k)<<endl;
    }
}