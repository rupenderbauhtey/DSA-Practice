#include<iostream>
using namespace std; 

double power(int n, int p)
{
    if (p==0)
    {
        return 1; 
    }

    double prevPower = power(n , p-1); 

    return n*prevPower;    
}


int main()
{
    double n , p; 
    cout<<"Enter the Number and the power you want to calculate"<<endl; 
    cin>>n>>p; 

    cout<<n<<" raised to the power "<<p<<" is :"<<power(n , p); 
}