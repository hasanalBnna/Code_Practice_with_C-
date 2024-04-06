#include<bits/stdc++.h>
//#include<conio.h>
using namespace std;
class circle{
public:
    float a,cir;
    void func()
    {
        cout<<"enter redious:"<<endl;
        cin>>a;
        cir=3.1416*a*a;
        cout<<"circle is="<<cir;
    }
    };
class rectangle{
public:
    float b,c,rec;
    void func()
    {
        cout<<"enter b:"<<endl;
        cin>>b;
        cout<<"enter c:"<<endl;
        cin>>c;
        rec=b*c;
        cout<<"rectangle is="<<rec;
    }
    };
int main(){
int n;
rectangle r;
circle c;
cout<<"choice:"<<endl;
cin>>n;
if(n==1){
cout<<c.func()<<endl;
}
else
    cout<<r.func();
getch();

}

