#include<iostream>
#include<climits>
using namespace std; 
 

int main()
{
    int n;
    cout<<"Enter the size of the array you want to create"<<endl; 
    cin>>n; 
    int arr[n]; 
    const int N= 1e6+2; 
    int idx[N]; 
    int mindx=INT_MAX; 

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the "<<i+1<<" element of the array"<<endl;
        cin>>arr[i];  
    }

    for (int i = 0; i < N; i++)
    {
        idx[i]=-1;
    }
    
    for (int i = 0; i < n; i++)
    {
        if (idx[arr[i]] !=-1 )
        {
            mindx=min(mindx, idx[arr[i]]);
        }
        
        idx[arr[i]]=i; 
    }
    
    if ( mindx==INT_MAX )
    {
        cout<<"Element not found"<<endl; 
    }
    else
    {
        cout<<"Minimum index is : "<<mindx<<" (0 based Indexing)"<<endl; 
    }

}
