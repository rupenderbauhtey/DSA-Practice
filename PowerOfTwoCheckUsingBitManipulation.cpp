#include<iostream>
using namespace std; 

bool check(int n )
{
    return (n && !( n & (n-1))); 
}
int main()
{
    int n; 
    cout<<"Enter the no you want to check for"<<endl; 
    cin>>n; 

    cout<<boolalpha<<check(n)<<endl; 

}
