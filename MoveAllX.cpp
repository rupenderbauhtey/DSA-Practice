#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 

string MoveAllX(string str)
{
    if (str.length()==0)
    {
        return ""; 
    }
    char ch = str[0]; 
    string ans = MoveAllX(str.substr(1)); 

    if (ch=='x')
    {
        return (ans+ch); 
    }
    return (ch+ans); 
    
}

int main()
{
    string str; 
    cout<<"Enter the string please"<<endl;
    getline(cin , str); 
    transform(str.begin(), str.end(), str.begin(), ::towlower);
    cout<<MoveAllX(str)<<endl; 
}
