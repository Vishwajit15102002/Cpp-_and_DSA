#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
   // cout<<"Enter any number : ";
   // cin>>n;
    for(i=5;i>=1;i--) // here in place of n there is 5 and n represents number of rows
    {
        for(j=1;j<=i;j++) 
        {
            cout<<" *";
        }
        cout<<"\n";
    }
    return 0;
}