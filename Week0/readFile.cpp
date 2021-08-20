#include<bits/stdc++.h>
using namespace std;

void linear_search(int a[],int s,int k)
{
    int cnt=0;
    for(int i=0;i<s;i++)
    {
        if(k==a[i])
        {
            cnt++;
            cout<<"Present "<<cnt<<endl;
            return ;
        }
        cnt++;
    }
    cout<<"not present "<<cnt<<endl;
}

int main(){
 int t;
 cin>>t;
while(t--){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  int key;
  cin>>key;
//   cout<<"size "<<n<<endl;
//   cout<<"array "<<endl;
//   for(int i=0;i<n;i++)
//   {
//       cout<<arr[i]<<endl;
//   }
//   cout<<"key "<<key<<endl;
    linear_search(arr,n,key);
}
return 0;
}