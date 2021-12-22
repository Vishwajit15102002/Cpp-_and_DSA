#include<iostream>
using namespace std;

int main()
{
    int i,j;
    // normal triangle
for(i=1;i<=4;i++)
{
    for(j=1;j<=i;j++)
    {
        cout<<j<<" ";
    }
    cout<<"\n";
}
cout<<"\n";
for(i=1;i<=4;i++)
{
    for(j=1;j<=5-i;j++)
    {
        cout<<j<<" ";
    }
    cout<<"\n";
}
    

return 0;
}