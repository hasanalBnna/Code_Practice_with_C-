#include<bits/stdc++.h>
#include<conio.h>
#include<string>

using namespace std;

class triangle{
public:
void area(int s1,int s2,int s3){
double s=(s1+s2+s3)/2.0;
cout<<s<<endl;
}

};
int main(){
triangle t;
t.area(3,4,5);
getch ();
}
