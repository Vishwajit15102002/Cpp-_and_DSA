#include<iostream>
using namespace std;

class student
{
    public:
    int roll;
    char name[20];

    void get_info()
    {
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter roll number : ";
        cin>>roll;
    }
    void display_info()
    {
        cout<<"My Name is : "<<name;
        cout<<"\n";
        cout<<"My Roll Number is : "<<roll;
    }
};

int main()
{
    student s1;
    s1.get_info();
    s1.display_info();
    return 0;
}