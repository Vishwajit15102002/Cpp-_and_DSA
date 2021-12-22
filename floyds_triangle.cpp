#include<iostream>
using namespace std;

int main()
{
    int i,j,p=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
          cout<<p<<" ";
          p++;
        }
        cout<<'\n';
    }
return 0;
}
