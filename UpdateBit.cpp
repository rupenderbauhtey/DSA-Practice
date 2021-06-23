#include<iostream>
using namespace std; 

int updateBit(int n , int pos, int value)
{
    int mask = ~(1<<pos); 
    n = n & mask; 
    return (n | (value<<pos));
}

int main()
{
    int n,pos,value; 
    cout<<"Enter the number you want to update bit for"<<endl; 
    cin>>n; 
    cout<<"Enter the position at which you want to update the bit"<<endl;
    cin>>pos; 
    cout<<"Enter the value you want to set"<<endl;
    cin>>value;

    cout<<"The updated no is :"<<updateBit(n , pos, value); 
}
