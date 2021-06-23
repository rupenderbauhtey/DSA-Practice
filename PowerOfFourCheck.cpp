#include<iostream>
using namespace std; 

int main()
{
    int n; 
    cout<<"Enter the no you want to check for :"<<endl; 
    cin>>n; 
    int count=0; 
    if (!(n & (n-1)))
    {
        int setBit=0; 
        while (setBit!=1)
        {
            setBit= n & 1; 
            count++; 
            n = n>>1; 
        }
       count--;  
    }
    else
    {
           cout<<"The No. is not a power of 4"<<endl; 
    }

    if (count%2==0)
    {
        cout<<"The No. is a power of 4"<<endl;
    }
    else
    {
        cout<<"The No. is not a power of 4"<<endl; 
    }
    

}
