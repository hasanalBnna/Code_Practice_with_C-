#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class coord{
public:
    int n1;
    int n2;
   string s1;


   coord(int x,int y,string z)
    {
       n1=x;
       n2=y;
       s1=z;
    }
    coord(coord &c1)
    {
    n1=c1.n1;
    n2=c1.n2;
    s1=c1.s1;
}
    void display()
    {
        cout<<n1<<"  "<<n2<<"  "<<s1<<endl;
    }
};
/*coord::coord(coord &c1)
{
    n1=c1.n1;
    n2=c1.n2;
    s1=c1.s1;
}*/
int main()
{
    cout<<"parameterized constructor "<<endl;
  coord ob4(0,0,"origin");
    ob4.display();
    cout<<"copy constructor "<<endl;
  coord cd(ob4);
    cd.display();
    getch();
}

