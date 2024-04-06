#include<bits/stdc++.h>
#include<conio.h>
#include<string>

using namespace std;

class triangle{
public:
    int s1,s2,s3,s4;
    triangle((int a,int b),(int c,int d)){
    s1=a;
    s2=b;
    s3=c;
    s4=d;
    }
void area(){
double s=(s1+s2+s3+s4)/2.0;
cout<<s<<endl;
}

};
int main(){
 triangle t(3,4),t2(5,6);
t.area();
getch ();
}
