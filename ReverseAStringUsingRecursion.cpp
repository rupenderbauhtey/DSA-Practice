#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 

void StringRev(string str)
{
    if (str.length()==0)
    {
        return ; 
    }
    
    StringRev(str.substr(1)); 
    cout<<str[0]; 
}

int main()
{
    string str;
    cout<<"Enter the string you want to reverse"<<endl;
    getline(cin, str);  
    StringRev(str);
}
