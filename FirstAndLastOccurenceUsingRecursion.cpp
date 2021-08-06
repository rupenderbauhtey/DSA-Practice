#include<iostream>
using namespace std; 

int FirstOccurence ( int arr[], int n , int i , int key)
{
    if (i==n)
    {
        return -1;
    }
    
    if (arr[i]==key)
    {
        return i; 
    }

    return (FirstOccurence(arr, n , i+1 , key));   
}

int LastOccurence(int arr[] , int n , int i , int key )
{
    if (i==n)
    {
        return -1; 
    }

    int restArray=LastOccurence(arr , n , i+1 , key );

    if (restArray!=-1)
    {
        return restArray; 
    }

    if (arr[i]==key)
    {
        return i; 
    }
    
    return -1; 
    
}

int main()
{
    int n, key; 
    cout<<"Enter the size of the array you want to create"<<endl; 
    cin>>n; 
    cout<<"Enter the element you want to search for"<<endl; 
    cin>>key;

    int arr[n]; 
    cout<<"Enter the elements of the array"<<endl; 
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i]; 
    }

    cout<<"The First Occurence is :"<<FirstOccurence(arr , n , 0 , key)<<endl; 
    cout<<"The Last Occurence is :"<<LastOccurence(arr , n , 0 , key )<<endl; 
    
}
