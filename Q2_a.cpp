#include<bits/stdc++.h>
#include<conio.h>
using namespace std;


int main()
{
    try {int num1,num2;

  num1=10;
  num2=0;
    if(num2==0)
    {
        throw 1;
    }
   double result=(double)num1/num2;
   cout<<"result: "<<result<<endl;
   }
   catch(int x)
   {
       cout<<"Runtime error"<<endl;
   }

    getch();
}
