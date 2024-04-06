
#include<bits/stdc++.h>
using namespace std;
#include<conio.h>
int main()
{
    char lo[50],up;
    int i;
    cin>>lo;
    for(i=0;i<strlen(lo);i++)
    {
        if(lo[i]>=97 && lo[i]<=122)
        {
            up=toupper(lo[i]);
        }
        cout<<up;
    }


    getch();
}
