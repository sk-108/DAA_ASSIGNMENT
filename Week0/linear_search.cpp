#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<"enter the key"<<endl;
    int key,comp=0,f=0;
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(key==v[i])
        {
          comp++;
          f=1;
          break;
        }
        else
            comp++;
    }
    cout<<comp<<endl;
    if(f==0)
    {
        cout<<"Key is not present "<<endl;
    }
    else{
        cout<<"Key is present "<<endl;
        cout<<"The total no of comparisions are "<<comp<<endl;
    }
    return 0;
}