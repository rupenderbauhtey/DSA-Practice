#include<iostream>
using namespace std; 

int main()
{
    int n; 
    cout<<"Enter the size of the array you want to create"<<endl; 
    cin>>n; 

    int arr[n]; 

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the "<<i+1<<" element of the array"<<endl;
        cin>>arr[i];    
    }

    cout<<"The Sum of All Subarrays is:"<<endl; 
    cout<<"====================================="<<endl;

    int currentSum=0;
    for (int i = 0; i < n; i++)
    {
        currentSum=0;
        for (int j = i; j < n; j++)
        {
            currentSum+=arr[j];
            cout<<currentSum<<" ";
        }
    }
    
}
