#include<iostream>
using namespace std; 

int fibonacci( int n )
{
    if (n==0 || n==1)
    {
        return n; 
    }

    return fibonacci(n-1)+ fibonacci(n-2); 
    
}

int main(){
    
    int n; 
    cout<<"Enter the position of which you want to get the fibonacci no "<<endl;
    cin>>n; 
    cout<<"The fibonacci No at "<<n<<" is: "<<fibonacci(n); 
}
