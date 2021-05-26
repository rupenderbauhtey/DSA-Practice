#include<iostream>
#include<cmath>

using namespace std;

bool IsPrime(int i)
{
    for(int j=2;j<=sqrt(i);j++)
    {
        if(i%j==0)
        {
            return false; 
        }
    }
    return true; 
}


int main()
{
    int a,b;
    cout<<"Enter the First Number"<<endl;
    cin>>a; 
    cout<<"Enter the second number"<<endl;
    cin>>b; 
    for (int i=a;i<b;i++)
    {
       if(IsPrime(i))
       cout<<i<<endl;
    
    }
    
}

