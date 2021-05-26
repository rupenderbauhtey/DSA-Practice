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
    cout<<"Enter the No. of Rows you want"<<endl;
    cin>>n; 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<factorial(i)/(factorial(j)*factorial(i-j))<<" ";
        }
        cout<<endl;
    }
}
