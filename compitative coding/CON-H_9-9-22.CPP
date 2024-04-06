
#include<bits/stdc++.h>
using namespace std;
int main()
{
int da,db;
cin>>da>>db;
if((da*10+9)+1==(db*10)){
        int a=(da*10+9)+180;
        int b=(db*10)+180;
    cout<<a<<" "<<b<<endl;
}
else if((da*10+4)+1==(db*10+5)){
    int a=(da*10+4)+368;
        int b=(db*10+5)+368;
    cout<<a<<" "<<b<<endl;
}
else if((da)+1==(db+9)){
    int a=da+180;
        int b=(db+9)+180;
    cout<<a<<" "<<b<<endl;
}
else
    cout<<"-1"<<endl;

return 0;
}
