#include<iostream>
using namespace std;
//complexity = O(n^2) 
void insertionsort(int a[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++){
        key=a[i]; j=i-1;
        while(j>=0 &&a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}
 void printarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
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
    insertionsort(arr,n);
    printarray(arr,n);
     
    return 0;    
}
