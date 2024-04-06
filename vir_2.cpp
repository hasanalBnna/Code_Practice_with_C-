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
    void refer(base &r){
    r.print();
    }
    int main(){
    base b;
    //base *p;
    derive d;
   // p= &b;
   // p->print();
    // p= &d;
   // p->print();


refer(b);
refer(d);

    getch();
    }
