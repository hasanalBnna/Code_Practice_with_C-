#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class base{
public:
   virtual void print(){
    cout<<"base class"<<endl;
    }

    };
    class derive:public base{
public:
    void print(){
    cout<<"derive class"<<endl;
    }

    };
    int main(){
    base *p, b;
    derive d;
    p= &b;
    p->print();
     p= &d;
    p->print();


    getch();
    }
