#include<iostream>
using namespace std; 

bool Sorted( int arr[], int n )
{
    if (n==1)
    {
        return true; 
    }

    int restArray = Sorted(arr+1 , n-1); 

    return (arr[0]<arr[1] && restArray); 
    
    
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

    cout<<boolalpha<<Sorted(arr , n); 
}
