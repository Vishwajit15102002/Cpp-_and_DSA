#include<iostream>
using namespace std;

class present
{
    private:
    int n1,n2;
    public:
    present()
    {
        n1 = 10;
        n2 = 20;
    }
    void display()
    {
        cout<<"the first number is : "<<n1<<'\n';
        cout<<"the second number is : "<<n2;
    }
};

int main()
{
    present o1;
    o1.display();
    return 0;
}