#include<iostream>
using namespace std;


int fibonacci(int n)
{
   int t1=0;
   int t2=1;
   int nexterm; 
   for (int i=0;i<n;i++)
   {
       cout<<t1<<endl;
       nexterm=t1+t2;
       t1=t2;
       t2=nexterm; 
   }

}

int main()
{
    int n; 
    cout<<"Enter the term till you want the fibonacci Series"<<endl; 
    cin>>n;
    fibonacci(n);
}
