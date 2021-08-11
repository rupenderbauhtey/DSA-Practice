#include<iostream>
using namespace std; 

void TowerOfHanoi( int n , char src , char dest , char help)
{
    if( n==0)
    {
        return;
    }

    TowerOfHanoi( n-1 , src , help , dest); 
    cout<<"Move Disk from "<<src<<" to "<<dest<<endl;
    TowerOfHanoi(n-1, help , dest ,src);  
}

int main()
{
int n; 
cout<<"Enter the no of disks you want to transfer"<<endl; 
cin>>n; 

TowerOfHanoi( n , 'A','B','C');

}
