#include<iostream>
using namespace std;

int checkOddEven(int n)
{
    if(n%2==0)
    {
        cout<<"The number is Even"<<endl;
    }
    else
    {
        cout<<"The number is odd"<<endl;
    }
  
}

int main()
{
    int n; 
    cout<<"Enter the no you want to check for"<<endl;
    cin>>n;
    checkOddEven(n);

}
