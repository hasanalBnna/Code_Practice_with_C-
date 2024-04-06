#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class coord{
public:
    int n1;
    int n2;
   string s1;

    coord()
    {
        cout<<"default constructor "<<endl;
    }
   coord(int x,int y,string z)
    {
       n1=x;
       n2=y;
       s1=z;
    }
    void display()
    {
        cout<<n1<<"  "<<n2<<"  "<<s1<<endl;
    }



};
int main()
{
  coord ob1,ob2,ob3;
  coord ob4(0,0,"origin");
    ob4.display();
    getch();
}
