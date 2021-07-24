#include<iostream>
using namespace std;
 
int fibonaccisearch(int arr[],int n,int x)
{
    int fib1=1;
    int fib2=0;
    int fib;
    fib=fib1+fib2;

    while(fib<n)
    {
        fib2=fib1;
        fib1=fib;
        fib=fib1+fib2;
    }

    int offset=-1;

    while(fib>1)
    {
        int i=min((offset+fib2),n-1);

        if(arr[i]<x)
        {
            fib=fib1;
            fib1=fib2;
            fib2=fib-fib1;
            offset=i;
        }
        else if(arr[i]>x)
        {
            fib=fib2;
            fib1=fib1-fib2;
            fib2=fib-fib1;
        }
        else 
        return i;
    }

    if(fib1 && arr[offset+1]==x)
     return offset+1;
    
return -1;

}

int main()
{   
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n,x,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>x;
    int ind = fibonaccisearch(arr,n,x);
    if(ind>=0)
      printf("Found at index: %d",ind);
    else
      printf("%d isn't present in the array",x);
    return 0;
}
