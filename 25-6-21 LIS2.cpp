#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
    FILE *pntr;
    pntr=fopen("file.txt","w");
    if(pntr==NULL)
    {
        cout<<"file is note found \n";
    }
    else
    {
        cout<<"file is found";
        fclose(pntr);
    }
    getch ();
}
