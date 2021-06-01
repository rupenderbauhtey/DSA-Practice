#include<iostream>
#include<climits>
using namespace std; 

int main()
{
    int n; 
    cout<<"Enter the size of the array you want to create :"<<endl; 
    cin>>n; 
    int arr[n]; 

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the "<<i+1<<" element of the array"<<endl;
        cin>>arr[i];    
    }
    
    int maxNo=INT_MIN; 

    for(int i=0; i<n;i++)
    {
        maxNo=max(maxNo,arr[i]);
        cout<<"The max till "<<i+1<<" is :"<<maxNo<<endl; 
    }
}
