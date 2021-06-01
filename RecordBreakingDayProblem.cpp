#include<iostream>
#include<climits>
using namespace std; 

int main()
{
    int n;   
    cout<<"Enter the size of the array you want to create"<<endl; 
    cin>>n; 

    int arr[n+1]; 
    arr[n]=-1;

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the "<<i+1<<" element of the array"<<endl;
        cin>>arr[i];    
    }

    int mx=INT_MIN; 
    int ans=0; 

    for (int i = 0; i < n; i++)
    {
        if ( arr[i]>mx && arr[i]>arr[i+1])
        {
           ans++;  
        }
        mx=max(mx, arr[i]);
        
    }
    cout<<"The no of record breaking days are :"<<endl;
    cout<<"============================================="<<endl;
    cout<<ans<<endl;
}
