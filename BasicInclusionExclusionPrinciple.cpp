#include<iostream>
using namespace std; 

int DivisibilityCheck(int n, int a, int b)
{
    int s1= n/a; 
    int s2= n/b; 
    int s3= n/(a*b); 
    return s1+s2-s3; 
}

int main()
{
    int n,a,b; 
    cout<<"Enter the number till which you want to check the divisibility"<<endl; 
    cin>>n; 
    cout<<"Enter the numbers you want to check the divisibility with"<<endl; 
    cin>>a>>b; 
    cout<<DivisibilityCheck(n , a, b)<<endl; 
}
