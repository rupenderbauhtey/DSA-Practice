#include<iostream>
#include<cmath>
using namespace std;

int main()
{ 
    int n;
    cout<<"Enter the number you want to check for ! "<<endl;
    cin>>n;
    bool flag=0;
    for (int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout<<"Tt's not a Prime No."<<endl;
            flag=1;
            break;
        }

    }
    if (flag==0)
    {
        cout<<"its a prime no"<<endl;
    }
    
}
