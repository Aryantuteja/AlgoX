#include<iostream>
using namespace std;
//Note: Array should be in sorted order as in this program 
// Sorting is Not Done. 
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
    int res = binarysearch(arr,0,n-1,key);
     (res == -1) ? cout << "Element is not present "
                   : cout << "Element is present at index " << res;
    return 0;    
}
