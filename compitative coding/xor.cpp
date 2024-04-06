#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,m,n;
    cin>>t;
    while(t--){
        int temp,mod;
        cin>>n>>m;
        n=pow(5,n)+pow(7,n);
        m=pow(5,m)+pow(7,m);
        int b,s;
        if(n>m){
            b=n;
            s=m;
        }
        else{
            b=m;
            s=n;
        }
        while(s!=0){
            temp=s;
            s=b%s;
            b=temp;
        }
        cout<<b<<endl;
    }
    return 0;
}
