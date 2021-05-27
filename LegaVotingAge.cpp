#include<iostream>
using namespace std; 

bool IsEligible(int a)
{
    if(a>=18)
    {
        return true; 
    }
    else
    {
        return false; 
    }
}

int main()
{
    int age; 
    cout<<"Enter the age of the candidate"<<endl;
    cin>>age;

    if (IsEligible(age))
    {
        cout<<"The candidate is eligible for voting"<<endl;
    }
    else
    {
        cout<<"The candidate is not eligible for voting"<<endl;
    }
    
}

