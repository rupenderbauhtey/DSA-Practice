#include<iostream>
using namespace std;

int CheckChar(char a)
{
    if(a>='a' && a<='z' || a>='A' && a<='Z')
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    char a;
    cout<<"Enter the character you want to check for"<<endl;
    cin>>a; 
    if(CheckChar(a))
    {
        cout<<"It's a an Alphabet"<<endl;
    }
    else
    {
        cout<<"Its not an Alphabet"<<endl;
    }
    
}
