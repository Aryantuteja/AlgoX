#include<bits/stdc++.h>
using namespace std;
//Note: Array should be in sorted order as in this program 
// Sorting is Not Done. 
int interpolationsearch(int arr[],int x,int n)
{   
    int lo=0;
    int hi=(n-1);

    while(lo<=hi && x>=arr[lo] && x<=arr[hi])
    {  
        if(hi==lo)
        {
            if(arr[lo]==x)
              return lo;
            return -1;
        }
    // The idea of formula is to return higher value of pos
    // when element to be searched is closer to arr[hi]. And
    // smaller value when closer to arr[lo]
    
    // using probe postion formula
    int pos = lo + ((double)(x-arr[lo])*(hi-lo) / (arr[hi]-arr[lo]));
    if(arr[pos]==x)
      return pos;
    if(arr[pos]<x)
      lo=pos+1;
    else
      hi=pos-1;
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
    int res = interpolationsearch(arr,key,n);
     (res == -1) ? cout << "Element is not present "
                   : cout << "Element is present at index " << res;
    return 0;    
}