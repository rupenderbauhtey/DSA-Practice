#include<iostream>
using namespace std;

int clearBit(int n, int pos)
{
    int mask = ~(1<<pos); 
    return(n & mask);
}

int main()
{
    int n,pos; 
    cout<<"Enter the no you want to clear bit for :"<<endl; 
    cin>>n; 
    cout<<"Enter the postion at which you want to clear bit for"<<endl; 
    cin>>pos; 

    cout<<clearBit(n , pos)<<endl; 
}
