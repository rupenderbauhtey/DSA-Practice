#include<iostream>
using namespace std; 

int factorial(int n)
{
    if (n==1)
    {
        return 1; 
    }
 

    return n*factorial(n-1); 
    
}

int main()
{
    int n; 
    cout<<"Enter the number of which you want to find the factorial"<<endl; 
    cin>>n; 

    cout<<"The factorial of the number "<<n<<" is :"<<factorial(n); 
}
