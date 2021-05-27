#include<iostream>
using namespace std; 

int BinarySearch(int arr[], int n, int key)
{
    int s=0;
    int e=n; 
    { 
        while ( s<=e )
        {
            int mid=(s+e)/2;
            if (arr[mid]==key)
            {
                return mid; 
            }
            else if (arr[mid]<key)
            {
                s=mid+1; 
            }
            else
            {
                e=mid-1;
            }
           
        }
     return -1;    
    }
}

int main()
{
    int n; 
    int key; 
    cout<<"Enter the size of the array"<<endl;
    cin>>n; 
    cout<<"Enter the number you want to search for"<<endl; 
    cin>>key;
    int arr[n]; 

    for(int i=0; i<n;i++)
    {
        cout<<"Enter the digit of the array"<<endl; 
        cin>>arr[i];
    }
    
    cout<<BinarySearch(arr,n,key)<<endl;
}
