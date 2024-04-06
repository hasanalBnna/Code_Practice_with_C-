#include<bits/stdc++.h>
#include<conio.h>
#include<string>

using namespace std;

class triangle{
public:
    int s1=3,s2=4,s3=5;
    triangle(int a,int b,int c){
    s1=a;
    s2=b;
    s3=c;
    }
void area(){
double s=(s1+s2+s3)/2.0;
cout<<s<<endl;
}

};
int main(){
 triangle t();//(3,4,5);
t.area();
getch ();
}
