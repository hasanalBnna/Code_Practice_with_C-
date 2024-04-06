#include<bits/stdc++.h>
#include<conio.h>
#include<string>

using namespace std;

class student{
public:
string name;
int roll_no;
int adress;
int phn_number;

};
int main (){
student s,s2;
s.name="john";
s.roll_no=2;
s.adress=1213;
s.phn_number=18789;

s2.name="kaku";
s2.roll_no=3;
s2.adress=1214;
s2.phn_number=19657;
cout<<"name"<<s.name<<" roll"<<s.roll_no<<" adress"<<s.adress<<" phn_num"<<s.phn_number<<endl;
cout<<"name"<<s2.name<<" roll"<<s2.roll_no<<" adress"<<s2.adress<<" phn_num"<<s2.phn_number<<endl;
getch ();
}
