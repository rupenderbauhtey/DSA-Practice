#include<iostream>
using namespace std;

int factorial(int n)
{ int fac=1;
    for(int i=0;i<n;i++)
    {
        fac*=(n-i);
    }
    return fac;
}


int main()
{
    int n;
    cout<<"Enter the no of which you want to find factorial of"<<endl;
    cin>>n;

    cout<<factorial(n);
}
