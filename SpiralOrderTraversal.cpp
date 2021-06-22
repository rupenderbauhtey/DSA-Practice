#include<iostream>
using namespace std;

int main()
{
    int n,m; 
    cout<<"Enter the dimensions of the matrix"<<endl;
    cin>>n>>m; 

    int mat[n][m]; 
    cout<<"Enter the elements of the matrix"<<endl; 

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the elements for row :"<<i+1<<endl; 
        for (int j = 0; j < m ; j++)
        {
            cin>>mat[i][j]; 
        }
        
    }


    int row_start=0, row_end=n-1, col_start=0, col_end=m-1; 


    while (row_start<=row_end && col_start<=col_end)
    {
        for (int i = col_start; i <= col_end; i++)
        {
            cout<<mat[row_start][i]<<" "; 
        }
        row_start++; 


        for (int i = row_start; i <= row_end; i++)
        {
            cout<<mat[i][col_end]<<" "; 
        }
        col_end--; 

        for (int i = col_end; i >= col_start; i--)
        {
            cout<<mat[row_end][i]<<" "; 
        }

        row_end--; 

        for (int i = row_end; i >= row_start; i--)
        {
            cout<<mat[i][col_start]<<" "; 
        }
        col_start++; 
        
    }
    
    
}
