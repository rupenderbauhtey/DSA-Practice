#include<iostream>
using namespace std; 

int BubbleSort(int arr[], int n)
{
    int counter=0;
     
    while ( counter<n-1 )
    {
       for (int i = 0; i < n-counter-1; i++)
       {

        if (arr[i]>arr[i+1])
        {
           
           int temp = arr[i];
           arr[i] = arr[i+1];
           arr[i+1]=temp; 
         }
       }

        counter++; 
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}

int main()
{
    int n; 
    cout<<"Enter the size of the array :"<<endl; 
    cin>>n; 
    int arr[n];

    for(int i=0; i<n;i++)
    {
        cout<<"Enter the "<<i<<" of the array :"<<endl; 
        cin>>arr[i];
    }

    cout<<"The Sorted Array is:"<<endl;
    cout<<"================================"<<endl;

    BubbleSort(arr , n);
}
