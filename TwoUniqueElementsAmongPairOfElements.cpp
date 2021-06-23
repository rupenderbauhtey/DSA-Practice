#include<iostream>
using namespace std;

int UniqueElements(int arr[] , int n)
{
    int xorsum=0; 
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    int originalXorsum = xorsum; 
    int pos=0; 
    int setBit=0; 

    while (setBit!=1)
    {
        setBit = xorsum & 1; 
        pos++; 
        xorsum = xorsum>>1; 
    }
    int newxorsum=0 ; 
    pos--; 

    for (int i = 0; i < n; i++)
    {
        if ( arr[i] & ( 1<< pos))
        {
            newxorsum = newxorsum ^ arr[i]; 
        } 
         
    }
    cout<<endl; 
    cout<<"The Unique Elements are"<<endl; 
    cout<<"=================================="<<endl; 
    cout<<newxorsum<<endl; 
    cout<<(originalXorsum^newxorsum)<<endl; 
    
    
    
}

int main()
{
    int n; 
    cout<<"Enter the size of the array"<<endl; 
    cin>>n;
    int arr[n]; 
    cout<<"Enter the elements of the array"<<endl; 
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i]; 
    }
    
    UniqueElements(arr , n); 
    
}
