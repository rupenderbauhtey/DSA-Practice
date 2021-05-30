#include<iostream>
using namespace std; 

int SelectionSort(int arr[], int n)
{
    cout<<"The Sorted Array is: "<<endl;
    cout<<"==============================================="<<endl;

    for (int i=0; i < n ; i++)
    {
        for(int j=i; j<n; j++)
        {
            if (arr[j]<arr[i])
            {
                int temp= arr[j];
                arr[j]=arr[i]; 
                arr[i]=temp;  
            }
            
        }    
    } 
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<endl;
    }
       
}

int main()
{
    int n; 
    int key; 
    cout<<"Enter the size of the array"<<endl; 
    cin>>n;
    int arr[n]; 

    for(int i=0; i<n;i++)
    {
        cout<<"Enter the "<<i+1<<" element of the array"<<endl;
        cin>>arr[i];
    }

    SelectionSort(arr , n );

}
