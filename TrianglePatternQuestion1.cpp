//          1 
//        2 3 2
//      3 4 5 4 3
//    4 5 6 7 6 5 4
//  5 6 7 8 9 8 7 6 5

#include<iostream>
using namespace std; 

int main()
{
    int r;
    cin>>r; 
    int NoConstraint=2;
    int NoStarting=1;
    int row=0;
    int EndingNoConstraint=2;  
    int EndingStartingNo=2;
    for (int i = 0; i < r; i++)
    {
        

        for (int i = r-row; i>0; i--)
        {
            cout<<" "<<" "; 
        }
        
        for (int i = NoStarting; i <NoConstraint ; i++ )
        {
            cout<<i<<" "; 
        }
        for (int i = NoConstraint-2; i>=NoStarting; i--)
        {
            cout<<i<<" "; 
        }
        
        NoConstraint+=2; 
        NoStarting++;
        EndingStartingNo+=2; 
        cout<<endl;
        row++;
    }
    
}
