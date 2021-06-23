#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str;
    cout<<"Enter the string you want to convert to upper case"<<endl; 
    getline(cin , str);
    transform(str.begin() , str.end() , str.begin(), ::toupper);
    cout<<"The capitalised string is :" <<str<<endl; 

    transform(str.begin(),str.end(),str.begin(), ::tolower);
    cout<<"The String in small case is :"<< str<<endl; 

    sort(str.begin(), str.end()); 
     
    cout<<"The sorted string is :"<< str <<endl;   
}
