#include<iostream>
using namespace std;

int main()
{
    int i,j,k=i;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=5;j++)
        {
            cout<<k--<<" ";
        }
        k=2;
        for(j=1;j<=5+i-1;j++)
        {
            cout<<k++<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
