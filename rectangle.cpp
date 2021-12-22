#include<iostream>
using namespace std;

int main()
{
    int r,c,i,j;
    cin>>r>>c;

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            cout<<j <<" ";
        }
       cout<<"\n"; 
    }
    return 0;
}