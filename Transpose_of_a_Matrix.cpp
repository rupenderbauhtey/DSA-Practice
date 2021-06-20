#include<iostream>
using namespace std;

int main()
{
    int n,m ; 
    cout<<"Enter the rows and columns of the matrix"<<endl; 
    cin>>n>>m;
    int mat[n][m]; 


    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the elements for row : "<< i+1<<endl;
        for(int j=0; j<n ; j++)
        {
            cin>>mat[i][j]; 
        }
    }

    cout<<"The original matrix is:"<<endl; 
    cout<<"----------------------------------"<<endl;

    for (int i = 0; i < n; i++)
    {
        for(int j=0; j<n ; j++)
        {
            cout<<mat[i][j]<<" "; 
    
        }
        cout<<endl; 
    }


    //Loop for transpose

    for (int i = 0; i < n; i++)
    {
        for (int j = i; i < m; i++)
        {
            int temp = mat[i][j]; 
            mat[i][j]=mat[j][i]; 
            mat[j][i]=temp;
        }

    cout<<"The Transposed Matrx is:"<<endl; 
    cout<<"----------------------------------"<<endl; 
        
    }

    for (int i = 0; i < n; i++)
    {
        for(int j=0; j<n ; j++)
        {
            cout<<mat[i][j]<<" "; 
    
        }
        cout<<endl; 
    }
        
}
