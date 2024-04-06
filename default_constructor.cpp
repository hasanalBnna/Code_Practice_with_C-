#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class car{
public:
    string name;
    string model;
    int year;
    car(string x,string y,int z){
    name=x;
    model=y;
    year=z;
    }
    car()
    {
        cout<<"default constructor"<<endl;
    }
};
int main(){

car obj1("BMW","bgf",1999),obj2("abc","klj",1969);
cout<<obj1.name<<" "<<obj1.model<<" "<<obj1.year<<endl;
cout<<obj2.name<<" "<<obj2.model<<" "<<obj2.year<<endl;
 car c;

getch();
}

