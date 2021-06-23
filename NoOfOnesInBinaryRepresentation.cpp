#include<iostream>
using namespace std; 

int main()
{
    int n; 
    cout<<"Enter the no. you want to check the no. of ones for"<<endl; 
    cin>>n ; 
    int count=0; 

    while(n)
    {
        n=n & (n-1); 
        count++; 
    }

    cout<<"The no. of ones in the binary representation :"<<count<<endl; 
}
