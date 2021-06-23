#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 

int main()
{
    string str; 
    cout<<"Enter the string :"<<endl; 
    getline(cin , str); 

    string ans;
    ans=str[0]; 
    int n= str.size();
 
    for (int i = 1; i < n; i++)
    {
        if (str[i]!=str[i-1])
        {
            ans=ans+str[i]; 
        }
        
    }

    
   cout<<ans; 
    
}
