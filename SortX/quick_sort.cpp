#include<iostream>
#include<stdlib.h>
using namespace std;
int partition(int arr[],int l,int r)
{    int x=rand()%(r-l+1)+l;
     int pivot=arr[x];
     swap(&arr[x],&arr[r]);
     int i=(l-1);
     for(int j=l;j<=r-1;j++)
     {
         if(arr[j]<pivot)
         {
             i++;
             swap(&arr[i],&arr[j]);
         }
     }
     swap(&arr[i+1],&arr[r]);
     return (i+1);
}
void quicksort(int arr[],int l,int r)
{
    if(l<r)
    {
        int p=partition(arr,l,r);
        quicksort(arr,l,p-1);
        quicksort(arr,p+1,r);
    }
}

int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}