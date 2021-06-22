#include<iostream>
using namespace std; 

int main()
{
    int n; 
    cout<<"Enter the size of the array you want to create"<<endl;
    cin>>n; 

    char arr[n+1]; 
    cout<<"Enter the string you want to check for"<<endl; 
    cin>>arr; 
    cout<<arr<<endl; 

    bool check=true; 

    for (int i = 0; i<n; i++)
    {
        if ( arr[i]!=arr[n-1-i] )
        {
            check=false;
            break;  
        }
        
    }

    if (check==true)
    {
        cout<<"The no. is a pallindrome"<<endl; 
    }
    else
    {
        cout<<"The No. is not a Pallindrome"<<endl;
    }
    
}
