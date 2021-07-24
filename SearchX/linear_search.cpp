#include<iostream>
using namespace std;
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
    for(i=0;i<n;i++)
    {
        if(key==arr[i])
          cout<<"Found at "<<i+1;
    }
    return 0;    
}