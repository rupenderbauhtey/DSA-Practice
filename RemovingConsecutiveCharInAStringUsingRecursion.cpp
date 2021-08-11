#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 

string RemoveChar(string str)
{
    if(str.length()==0)
    {
        return ""; 
    }
    char ch = str[0]; 
    string ans = RemoveChar(str.substr(1));

    if (ch==ans[0])
    {
        return ans; 
    }
    return (ch+ans);  
}

int main()
{
    string str; 
    cout<<"Enter the string please"<<endl; 
    getline(cin , str);  
    cout<<RemoveChar(str); 
}
