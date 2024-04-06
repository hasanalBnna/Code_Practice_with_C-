
#include<bits/stdc++.h>
using namespace std;

class point
{

        int x,y;
    public:
        point(int x1,int y1)
        {
            x=x1;
            y=y1;
        }
        //copy const
        point( point &p2)
        {
            x=p2.x;
            y=p2.y;
        }
        int getX()
        {
            return x;
        }
        int getY()
        {
            return y;
        }
};

int main()
{
    point p1(10,15);//normal
    point p2=p1;//copy
    cout<<"p1.x= "<<p1.getX()<<",p1.y= "<<p1.getY()<<endl;
    cout<<"p2.x= "<<p2.getX()<<",p2.y= "<<p2.getY();
    return 0;
}
