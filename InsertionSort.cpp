#include<iostream>
using namespace std; 

int InsertionSort(int arr[] , int n)
{
    for (int i = 0; i < n; i++)
    {
        int current=arr[i]; 
        int j=i-1; 

        while(arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j]; 
            j--; 
        }
        arr[j+1]=current; 
        }

    cout<<"The sorted array is :"<<endl;
    cout<<"============================"<<endl;
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
}

int main ()
{
    int n; 
    cout<<"Enter the size of the "<<endl; 
    cin>>n; 
    int arr[n]; 

    for(int i=0 ; i<n; i++)
    {
        cout<<"Enter the "<<i+1<<" element of the array"<<endl;
        cin>>arr[i]; 
    }

    InsertionSort(arr , n);
}
