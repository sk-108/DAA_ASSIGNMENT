#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<"No of test cases "<<n<<endl;
    for(int i=0;i<n;i++)
    {
        int size;
        cin>>size;
        int arr[size];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int key ;
        cin>>key;
        // linearsearch(arr,size,key);
        cout<<"size "<<size<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"key "<<key<<endl;
    }
}