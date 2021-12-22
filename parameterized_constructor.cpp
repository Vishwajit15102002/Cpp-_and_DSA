#include <iostream>
using namespace std;

class present 
{
private:
int a, b;
public:
present (int n1, int n2)
{
a = n1;
b = n2;
}
int getX ()
{
return a;
}
int getY ()
{
return b;
}
};
int main ()
{
present obj(10, 15);
cout << "obj.a = " << obj. getX() << ", obj.b = " << obj.getY();
return 0;
}