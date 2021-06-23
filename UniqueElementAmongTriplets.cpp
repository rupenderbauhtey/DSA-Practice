#include<iostream>
using namespace std; 

int Setbit(int n , int pos)
{
    return ( n | (1<<pos)); 
}

int getbit(int n , int pos)
{
    return((n & (1<<pos))!=0); 
}

int uniqueElements ( int arr[], int n )
{   
    int result=0; 
    int sum=0; 
    for (int i = 0; i < 64; i++)
    {
        sum=0; 
        for (int j = 0; j < n; j++)
        {
          if (getbit(arr[j], i))
          {
          sum++;
          }
          
        }
        if(sum%3!=0)
        {
            result = Setbit(result , i); 
        }
      

    }
    cout<<"The Unique Element is"<<endl; 
    cout<<result<<endl;  
    
}

int main()
{
    int n; 
    cout<<"Enter the size of the array you want to create"<<endl; 
    cin>>n; 
    int arr[n]; 
    cout<<"Enter the elements in the array"<<endl; 
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i]; 
    }
    
    uniqueElements(arr,n); 
}
