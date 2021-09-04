    #include<iostream>
using namespace std;
int comp=0;
// int inversion=0;
long long  merge(int arr[],int l,int mid,int r)
{
    int n1=mid-l+1;
    int inversion=0;
    int n2=r-mid;
    int x[n1],y[n2];
    for(int i=0;i<n1;i++)
    {
        x[i]=arr[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        y[j]=arr[mid+1+j];
    }
    //  for(int i=0;i<n1;i++)
    // {
    //     cout<<x[i]<<" ";
    // }
    // cout<<endl;
    // for(int j=0;j<n2;j++)
    // {
    //     cout<<y[j]<<" ";
    // }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(x[i]<y[j])
        {
            arr[k]=x[i];
            k++;
            i++;
            
            
        }
        else{
            arr[k]=y[j];
            k++;
            j++;
            inversion+= n1-i;
        }
        comp++;
        
    }
    while(i<n1)
    {
        arr[k]=x[i];
        k++;
        i++;
       
    }
    while(j<n2)
    {
        arr[k]=y[j];
        k++;
        j++;
        // inversion++;
    }
    return inversion;
}

long long  merge_sort(int a[],int l,int r)
{
    long long inversion=0;
    if(l<r)
    {
        int mid=(l+r)/2;
       inversion+= merge_sort(a,l,mid);
         inversion+= merge_sort(a,mid+1,r);
         inversion+= merge(a,l,mid,r);
    }
    return inversion;
}


int main()
{
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
    // for(int i=0;i<n-1;i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //         if(a[i]>a[j] && i<j)
    //         {
    //             inversion++;
    //         }
    //     }
    // }
    comp=0;
  long long inv=  merge_sort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"comparisions "<<comp<<endl;
    cout<<"Inversions "<<inv<<endl;
}
}

/*
10
54 65 34  76 78 97 45 32 51 21
8
23 65 21 76 45 89 45 32
*/