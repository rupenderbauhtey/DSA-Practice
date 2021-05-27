#include<iostream>
using namespace std; 

int main()
{
    int n; 
    cout<<" Enter the size of the array you want to create:"<<endl;
    cin>>n; 
    int arr[n];
    int ArrSum[n];
    int sum=0;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the elements of the array"<<endl;
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        sum +=arr[i];
        ArrSum[i]=sum;
    }
    
    cout<<"The Running Sum of the array is"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<ArrSum[i]<<" "<<endl;
    }
}
