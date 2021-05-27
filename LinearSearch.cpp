#include<iostream>
using namespace std;

int LinearSearch(int arr[], int n , int key)
{
    for(int i=0;i<n;i++)
    {
        if ( arr[i]==key )
        {
            return i;
        }
        
    }
    return -1;
}

int main()
{
    int n; 
    int key; 
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the element you want to search for"<<endl;
    cin>>key;
     
    int arr[n];

    for (int i = 0; i <n; i++)
    {
        cout<<"Enter the "<<i<<" Element of the array"<<endl;
        cin>>arr[i];
    }
    
    cout<<"The Element is on the position :"<<LinearSearch(arr, n, key)<<endl;

}
