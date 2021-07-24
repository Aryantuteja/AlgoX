#include<bits/stdc++.h>
using namespace std;
//Note: Array should be in sorted order as in this program 
// Sorting is Not Done. 
int jumpsearch(int arr[],int x,int n)
{   
    int step=sqrt(n);
    int prev =0;
    while(arr[min(step,n)-1]<x)
    {
        prev=step;
        step+=sqrt(n);
        if(prev>=n)
            return -1;
    }
    while(arr[prev]<x)
    {    prev++;
        if(prev==min(step,n))
            return -1; 
    }
    if(arr[prev]==x)
       return prev;

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
    int res = jumpsearch(arr,key,n);
     (res == -1) ? cout << "Element is not present "
                   : cout << "Element is present at index " << res;
    return 0;    
}