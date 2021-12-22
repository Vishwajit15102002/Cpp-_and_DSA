#include<iostream>
#include<stdio.h>

using namespace std;
class student
{
    public:
    int roll;
    char name[20];
    void get_info();
    void display_info();
};

void student::get_info()
{
    cout<<"Enter the name : ";
    cin>>name;
    cout<<"Enter roll number : ";
    cin>>roll;
}
void student::display_info()
{
    cout<<"My name is : "<<name;
    cout<<"\n";
    cout<<" My Roll Numbers us : "<<roll;
}

int main()
{
    student s1;
    s1.get_info();
    s1.display_info();
    return 0;
}