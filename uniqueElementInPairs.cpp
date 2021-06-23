#include<iostream>
using namespace std; 

int uniqueElements  ( int arr[], int n)
{
    int xorsum = 0; 

    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i]; 
    }

    return xorsum; 
}
int main()
{
    int n; 
    cout<<"Enter the size of the array you want to create"<<endl;
    cin>>n; 
    int arr[n];

    cout<<"Enter the elements of the array"<<endl; 
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i]; 
    }
    
    cout<<"The unique element is :"<<uniqueElements(arr , n)<<endl; 
} 
