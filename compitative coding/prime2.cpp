#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
for(int i=2;i<=sqrt(n);i++)
{
    if(n%i==0) return false;
}
return true;
}
int main(){
int n;
cin>>n;
if(prime(n))
{
    cout<<"yes"<<endl;
}
else
    cout<<"no"<<endl;
return 0;
}
