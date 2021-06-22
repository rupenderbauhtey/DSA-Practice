#include<iostream>
using namespace std; 

int main()
{
    int n; 
    cout<<"Enter the size of array you want to create"<<endl; 
    cin>>n; 
    cin.ignore();
    
    char arr[n+1]; 
    cout<<"Enter the string :"<<endl; 
    cin.getline(arr,n); 
    cin.ignore();

    int i=0; 
    int currentLength=0;
    int maxLength =0; 

    while(1) 
    {
        if(arr[i]==' '|| arr[i]=='\0')
        {
            maxLength=max(maxLength, currentLength); 
            currentLength=0; 
        }
        else
        {
        currentLength++; 
        }

        if (arr[i]=='\0' )
        {
            break; 
        }
       i++;  
    }
    
    cout<<"The length of the largest word is :"<<maxLength<<endl; 



}
