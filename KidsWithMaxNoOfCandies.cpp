#include<iostream>
#include<climits>
using namespace std; 

bool CanMax(int CurrentCandy, int MaxCandy , int ExtraCandy)
{
    if ( CurrentCandy+ExtraCandy>=MaxCandy )
    {
        return true; 
    }
    else
    {
        return false; 
    }
    
}

int main ()
{
    int NumberOfKids; 
    int ExtraCandies; 

    cout<<"Enter the Total Number of Kids"<<endl;
    cin>>NumberOfKids; 
    cout<<"Enter the number of extra candies !"<<endl;
    cin>>ExtraCandies; 

    int CandyArray[NumberOfKids]; 
    bool MaxCandy[NumberOfKids]; 

    for(int i=0;i<NumberOfKids;i++)
    {
        cout<<"Enter the no. of candies for "<<i+1<<" kid"<<endl;
        cin>>CandyArray[i];
    }

    int maxCan=INT_MIN; 

    for (int i=0;i<NumberOfKids;i++)
    {
        maxCan=max(maxCan,CandyArray[i]);
    }
   
    for(int i=0;i<NumberOfKids;i++)
    {
        if (CanMax(CandyArray[i],maxCan,ExtraCandies))
        {
            MaxCandy[i]=true; 
        }

        else
        {
            MaxCandy[i]=false; 
        }
        
    }

    for (int i = 0; i <NumberOfKids; i++)
    {
        cout<<boolalpha<<MaxCandy[i]<<" "<<endl;
    }
    

}
