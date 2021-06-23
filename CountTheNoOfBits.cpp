#include<iostream>
using namespace std; 

int main()
{
    int n; 
    cout<<"Enter the no. you want to count bits for"<<endl; 
    cin>>n; 
    int count=0; 
    while ( n>0 ) 
    {
        n=n/2; 
        count++; 
    }
    cout<<count<<endl; 
}
