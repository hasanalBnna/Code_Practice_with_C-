#include<iostream>
#include<conio.h>
using namespace std;
class student{
public:
    int id;
    double gpa;
    void setvlu(int x,double y)
    {
        id=x;
        gpa=y;
    }
    void display()
    {
      cout<<id<<"   "<<gpa<<endl;
    }

};


int main(){
student alim,jalim;
alim.setvlu(101,3.92);
alim.display();


jalim.setvlu(1102,3.95);
jalim.display();


getch();
}
