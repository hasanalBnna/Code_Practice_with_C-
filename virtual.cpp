#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class base{
public:
void print(){
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
base B;
derive D;
B.print();
D.print();
getch();
}
