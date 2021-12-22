#include<iostream>
using namespace std;

int main()
{
    int n1,n2;
    cout<<"Enter two numbers : ";
    cin>>n1>>n2;
   
  

    char op;
    cout<<" Enter any operator: ";
    cin>>op;

    switch(op)
    {
    case '+':
        cout<<n1+n2;
        break;
    case '-':
        cout<<n1-n2;
        break;
    case '*':
        cout<<n1*n2;
        break;
    case '/':
        cout<<n1/n2;
        break;
    default:
        cout<<"error";
        break;
    }
return 0;
}