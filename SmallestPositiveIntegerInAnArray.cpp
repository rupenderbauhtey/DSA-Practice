#include<iostream>
using namespace std; 

void FindTheMissing(int arr[], int N , int arrSize)
{
    bool log[N]; 
    for (int i = 0; i < N; i++)
    {
        log[i]=0; 
    }
    for (int i = 0; i < arrSize; i++)
    {
        log[arr[i]]=1; 
    }
    for (int i = 1; i < N; i++)
    {
        if (log[i]==0)
        {
            cout<<i; 
        }   
    }      
}

int main()
{
    int N; 
    cout<<"Enter the Number"<<endl; 
    cin>>N; 
    int arrSize = N-1; 
    int arr[arrSize];
    cout<<"Enter the elements of the array"<<endl; 
    for (int i = 0; i < arrSize; i++)
    {
        cin>>arr[i]; 
    }
    FindTheMissing(arr , N , arrSize); 
}

