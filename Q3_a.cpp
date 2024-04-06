#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
template<class tmp>
tmp greatest(tmp x,tmp y,tmp z)
{

    if(x>y && x>z)
        return x;
   else if(y>z && y>x)
        return y;
        else
            return z;
}
int main()
{
    cout<<"int greatest= "<<greatest<int>(10,20,30)<<endl;
    cout<<"float greatest= "<<greatest<float>(10.4,20.5,30.6)<<endl;
    cout<<"char greatest= "<<greatest<char>('2','3','4')<<endl;


    getch();
}
