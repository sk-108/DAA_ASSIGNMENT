#include<bits/stdc++.h>
using namespace std;

void jump_search(int a[],int n,int k)
{
    int jump = sqrt(n);
    int step = jump;
    int prev = 0;
    int cnt=0;
    while(a[min(step,n)-1]<k)
    {
            cnt++;
            prev = step;
            step +=jump;
            if( prev>k)
            {
                cout<<"Not present "<<cnt<<endl;
                return ;
            }
            
    }
    while(a[prev]<k)
    {
        cnt++;
        prev++;
        if(prev==min(step,n))
        {
            cout<<"Not Present "<<cnt<<endl;
            return ;
        }
        
    }
    if(a[prev]==k){
        cnt++;
        cout<<"Present "<<cnt<<endl;
        return ; 
    }
    cout<<"Not present "<<cnt<<endl;
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
      int key;
      cin>>key;
     jump_search(a,n,key);

  }
return 0;
}