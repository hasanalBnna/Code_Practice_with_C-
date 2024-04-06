#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        int A,B,C,temp;
        cin>>A>>B>>C;

        temp=(A+B+C);
        if(temp%3==0){
            cout<<"Case "<<i<<": Peaceful"<<endl;
        }
        else
            cout<<"Case "<<i<<": Fight"<<endl;
    }
    return 0;
}
