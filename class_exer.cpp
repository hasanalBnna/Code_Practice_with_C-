#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

class rectangle{
    public:
 int x;
 int y;
int area()
 {
     return x*y;
     }

};
int main(){
rectangle reg;
cout<<"enter the wight:";
cin>>reg.x;
cout<<"enter the height:";
cin>>reg.y;

cout<<"area is:"<<reg.area();

getch ();
}
