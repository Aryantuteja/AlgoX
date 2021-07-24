#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int l,int r,int key)
{   if(r>=l)
    {
    int mid=l+(r-l)/2;

    if(arr[mid]==key)
        return mid;
    if (arr[mid]>key)
        return binarysearch(arr,l,mid-1,key);

    return binarysearch(arr,mid+1,r,key);
    }
    
    return -1;
}

int exponentialsearch(int arr[],int n,int x)
{
    if(arr[0]==x)
      return 0;

    int i=1;
    while(i<n && arr[i]<=x)
      i=i*2;

    return binarysearch(arr,i/2,min(i,n-1),x);
}

int main()
{   
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n,key,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>key;
    int res = exponentialsearch(arr,n,key);
     (res == -1) ? cout << "Element is not present "
                   : cout << "Element is present at index " << res;
    return 0;    
}