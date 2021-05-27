#include<iostream>
using namespace std;

int swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b; 
    *b=temp;  
}

int main()
{
    int a,b; 
    cout<<" Enter the first Number"<<endl;
    cin>>a;
    cout<<" Enter the Second Number"<<endl;
    cin>>b; 
    cout<<"Original Digits:"<<a<<" and "<<b<<endl;
    swap(&a,&b);
    cout<<"Swapped Digits:"<<a<<" and "<<b<<endl;

}
