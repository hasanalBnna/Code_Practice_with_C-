#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class Date{
private:
   int day,month,year;
public:
    Date(int x,int y,int z)
    {
        day=x;
        month=y;
        year=z;
    }
    void display()
    {
        cout<<"Date (Chinese form)is  "<<year<<"/"<<month<<"/"<<day<<endl;
    }
};
int main()
{
   Date d(23,12,2016);
    d.display();
    getch();
}
