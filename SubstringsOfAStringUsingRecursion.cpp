#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 

void Substring(string str , string ans="")
{
    if (str.length()==0)
    {
        cout<<ans<<endl; 
        return ; 
    }
    
    char ch= str[0]; 

    Substring(str.substr(1) , ans+ch); 
    Substring(str.substr(1) , ans); 
 
}
int main()
{
    string str; 
    cout<<"Enter the string here"<<endl; 
    cin>>str; 
    Substring(str); 
}
