#include<iostream>
using namespace std;

int main()
{
    int n; 
    cout<<" Enter The No. you want to reverse"<<endl;
    cin>>n;
    int reverse=0; 

    while (n>0)
    {
        int lastDigit=n%10;
        reverse=reverse*10 +lastDigit;
        n=n/10;
    }
    
    cout<<"The reverse of the No.you provided is:"<<reverse<<endl;
}
