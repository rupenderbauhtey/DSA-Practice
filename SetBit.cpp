#include<iostream>
using namespace std; 

int setBit(int n, int pos)
{
    return ( n|(1<<pos) ); 
}

int main()
{
    int n,pos ; 
    cout<<"Enter the no in which you want to set the bit"<<endl; 
    cin>>n; 
    cout<<"enter the position at which you want to set the bit"<<endl;
    cin>>pos; 

    cout<<setBit(n , pos)<<endl;  


}
