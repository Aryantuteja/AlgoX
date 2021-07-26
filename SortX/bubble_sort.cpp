#include<iostream>
using namespace std;
//complexity = O(n^2) 
void bubblesort(int a[],int n)
{
    int i,j,temp,mini;
    for(i=0;i<n;i++){
      
        for(j=0;j<i;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
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
    bubblesort(arr,n);
    printarray(arr,n);
     
    return 0;    
}
