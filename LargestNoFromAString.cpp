#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 

int main()
{
    string str; 
    cout<<"Enter the numeric string :"<<endl; 
    getline(cin , str); 
    sort(str.begin(), str.end(), greater<int>());
    cout<<str<<endl; 

}
