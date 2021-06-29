#include<iostream>
using namespace std; 

int GCD(int a, int b)
{
    while (b!=0)
    {
        int rem=a%b; 
        a=b; 
        b=rem; 
    }
    return a;     
}

int main()
{
    int a,b; 
    cout<<"Enter the numbers you want to find the GCD of :"<<endl; 
    cin>>a>>b; 
    cout<<"The GCD of the given numbers is :"<<GCD(a,b); 
}
