#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n; 
    cout<<"Enter the No. you want to check for:"<<endl;
    cin>>n;
    int OriginalNo=n;
    int Arm=0;
    while (n>0)
    {
        int lastDigit=n%10;
        Arm+=pow(lastDigit,3);
        n=n/10;
    }
    
    if (OriginalNo==Arm) 
    {
        cout<<"It is a Armstrong No !!"<<endl;
    }
    else
    {
        cout<<"It is not an Armstrong No. !!"<<endl;
    }
      
}
