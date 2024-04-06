#include<iostream>
#include<conio.h>
using namespace std;

class student{
public:
   const int admsnfee;
   const  int examfee;
    int id;

    student(int x,int y,int z)
    :admsnfee(x),examfee(y)
    {

       cout<<admsnfee<<endl;
       cout<<examfee<<endl;
       id=z;
       cout<<"id= "<<id<<endl;
    }


};
int main()
{
    student s1(15000,500,101);

    getch();
}
