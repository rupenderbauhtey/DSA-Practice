#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 

int main()
{
    string str; 
    cout<<"Enter the string :"<<endl; 
    getline(cin , str); 

    transform(str.begin(), str.end(), str.begin() , ::tolower);


    int frequency[26];

    for (int i = 0; i < 26; i++)
    {
        frequency[i]=0; 
    }
     
    for (int i = 0; i < str.length(); i++)
    {
        frequency[str[i]-'a']++;
    }
    
    int maxFrequency = 0; 
    char ans; 

    for (int i = 0; i < 26; i++)
    {
        if ( frequency[i]>maxFrequency)
        {
            maxFrequency=frequency[i]; 
            ans= i +'a'; 
        }
        

    }
    
    cout<<"The character is :"<<ans<<endl; 
    cout<<"The frequency is :"<<maxFrequency<<endl;  

}
