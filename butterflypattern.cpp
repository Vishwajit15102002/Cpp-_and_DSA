// Butterfly pattern
#include<iostream>
using namespace std;

int main()
{
    int i,j,space,n;
    cout<<"  enter the no of rows : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
    space = 2*n-2*i;
    for(j=1;j<=space;j++)
    {
        cout<<" ";
    }
     for(j=1;j<=i;j++)
        {
            cout<<"*";
        }cout<<'\n';
    }
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
    space = 2*n-2*i;
    for(j=1;j<=space;j++)
    {
        cout<<" ";
    }
     for(j=1;j<=i;j++)
        {
            cout<<"*";
        }cout<<'\n';
    }
    return 0;
}