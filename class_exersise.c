#include<bits/std++.h>
using namespace std;

class rectangle{
 int x;
 int y;
 void area(){
 return x*y;
 }

};
int main(){
rectangle reg;
cout<<"enter the wight:"<<endl;
cin>>reg.x;
cout<<"enter the height:"<<endl;
cin>>reg.y;
area();
cout<<"area is:"<<reg.area();

getch ();
}
