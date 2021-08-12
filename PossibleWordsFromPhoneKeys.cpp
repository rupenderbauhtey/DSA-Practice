#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 

string Keypad[] = { "", "" , "abc", "def" , "ghi" , " jkl" , "mno" , "pqrs" , "tuv" , "wxyz"}; 

void WordsWithKeys(string str , string ans="")
{
    if (str.length()==0)
    {
        cout<<ans<<endl;
        return; 
    }

    char ch=str[0]; 
    string alpha = Keypad[ch-'0']; 

    for (int i = 0; i < alpha.size(); i++)
    {
        WordsWithKeys(str.substr(1), ans+alpha[i] );
    }  
}
int main()
{
    string str; 
    cout<<"Please enter your choice"<<endl; 
    cin>>str; 
    WordsWithKeys(str);
}
