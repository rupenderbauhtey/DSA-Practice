#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 

void ReplacePi(string str)
{
    if (str.length()==0)
    {
        return; 
    }
    if (str[0]=='p' && str[1]=='i')
    {
        cout<<"3.14";
        ReplacePi(str.substr(2));
    }
    else
    {
        cout<<str[0]; 
        ReplacePi(str.substr(1)); 
    }    
}

int main()
{
    string str; 
    cout<<"Enter the string please"<<endl; 
    getline(cin , str);
    transform(str.begin() , str.end(), str.begin() , ::tolower); 
    ReplacePi(str);

}
