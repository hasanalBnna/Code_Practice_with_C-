#include<iostream>
#include<conio.h>
using namespace std;


class person
{
public:
    string name;
    int age;
    void display1()
    {
        cout<<"NAME :"<<name<<endl;
        cout<<"AGE :"<<age<<endl;
    }
};
class student:public person
{

public:
    int id;
    void display2()
    {
        cout<<"ID= "<<id<<endl;
        display1();
    }
};

int main(){

student s1;
s1.name="banna";
s1.age=21;
s1.id=1211;
s1.display2();




getch();
}
