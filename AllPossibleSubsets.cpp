#include<iostream>
using namespace std; 

void AllSubsets(int arr[] , int n)
{
    for (int i = 0; i < (1<<n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i & (1<<j))
            {
                cout<<arr[j]; 
            }
        }
        cout<<endl; 
        
    }
    
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
    
    AllSubsets(arr , n); 

}
