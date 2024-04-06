#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class base{
public:
virtual void print(){
cout<<"base class"<<endl;
}
};
class derive1:public base{
public:
void print(){
cout<<"derive class 1"<<endl;
}
};
class derive2:public derive1{
public:
void print(){
cout<<"derive class 2"<<endl;
}
};
void ref(base &r){
r.print();
}
int main(){
base B;
derive1 D1;
derive2 D2;
ref(B);
ref(D1);
ref(D2);

getch();
}
