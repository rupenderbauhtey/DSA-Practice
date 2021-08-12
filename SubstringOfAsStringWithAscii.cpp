#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 

void SubstringWithAscii(string str , string ans="")
{
    if (str.length()==0)
    {
        cout<<ans<<endl; 
        return; 
    }

    char ch= str[0]; 
    int code = ch; 

    SubstringWithAscii(str.substr(1), ans);
    SubstringWithAscii(str.substr(1), ans+ch);
    SubstringWithAscii(str.substr(1), ans + to_string(code)); 
    
}
int main()
{
    string str; 
    cout<<"Enter your string here"<<endl;
    cin>>str; 
    SubstringWithAscii(str); 
}
