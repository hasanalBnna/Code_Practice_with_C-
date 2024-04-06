#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class Base{
public:
    virtual void func(){
    cout<<"1st word"<<endl;
    }
};
class derive:public Base{
public:
    void func(){
    cout<<"2nd word"<<endl;
    }
};
void ref(Base &r){
r.func();
}
int main (){
Base  b;
derive d;
ref(b);
ref(d);

getch();
}
