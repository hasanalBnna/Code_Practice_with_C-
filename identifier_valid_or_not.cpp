#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
cout<<"enter a string: ";
cin>>str;

if(str[0]>='a' && str[0]<='z' || str[0]>='A' && str[0]<='Z' || str[0]=='_'){
    for(int i=1;i<str.length();i++){
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z' || str[i]=='_' || str[i]>='0' && str[i]<='9');
    }
    cout<<" Identifier valid"<<endl;
}
else{
    cout<<"Identifier not valid"<<endl;
}


return 0;
}
