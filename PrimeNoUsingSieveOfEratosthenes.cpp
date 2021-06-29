#include<iostream>
using namespace std; 

void PrimeSieve(int n)
{
    int arr[n+1]={0}; 
    for (int i = 2; i <=n; i++)
    {
        for (int j = i*i; j<=n; j+=i)
        {
            arr[j]=1; 
        }
        
    }

    for (int i = 2; i <=n; i++)
    {
        if (arr[i]==0)
        {
            cout<<i<<" ";
        }   
    }   
}

int main()
{
    int n; 
    cout<<"Enter the no till which you want to find the prime numbers"<<endl; 
    cin>>n; 
    PrimeSieve(n); 


}

