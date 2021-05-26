#include<iostream>
using namespace std;

int maxNo(int a, int b, int c)
{
    if(a>b)
    {
        if (a>c)
        {
            cout<<a<<" Is the Greatest"<<endl;
        }
        else
        {
            cout<<c<<" Is the Greatest"<<endl;
        }
        
    }
    else
    {
        if (b>c)
        {
            cout<<b<<" Is the Greatest"<<endl;
        }
        else
        {
            cout<<c<<" Is the Greatest"<<endl;
        }
        
    }
}


int minNo(int a,int b, int c)
{
    if (a<b)
    {
        if (a<c)
        {
            /* code */
            cout<<a<<" Is the smallest"<<endl;
        }
        else{
            cout<<c<<" Is the smallest "<<endl;
        }
        
    }
    else
    {
        if (b<c)
        {
            /* code */
            cout<<b<<" is the smallest"<<endl;
        }
        else
        {
            cout<<c<<" Is the smallest"<<endl;
        }
        
    }
    
}

int main()
{
    int a,b,c; 
    cout<<"Enter the numbers you want to find Max and Min of"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    maxNo(a,b,c);
    minNo(a,b,c);
}
