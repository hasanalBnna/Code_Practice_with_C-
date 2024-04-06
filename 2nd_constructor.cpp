#include<iostream>
#include<conio.h>
using namespace std;
class student{
public:
    int id;
    double gpa;
    //peramitarize constructor
   student(int x,double y)
   {
     id=x;
     gpa=y;
   }
    void display()
    {
      cout<<id<<"   "<<gpa<<endl;
    }
    //default constructor
    student()
    {
        cout<<"default constructor"<<endl;
    }

};


int main(){
    //default constructor call
    //
   // student obj;
    //perametarize constructor automatically call
student alim(101,3.92);
alim.display();


student jalim(102,3.85);
jalim.display();
student obj;

getch();
}

