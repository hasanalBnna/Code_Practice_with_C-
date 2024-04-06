#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
cout<<"Enter a String:";
cin>>str;

if(str[0]=='/' && str[1]=='/' && str[2] != '/' ){
    cout<<"single line comment"<<endl;
}
else if(str[0]=='/' && str[1]=='*' && str[str.size()-2]=='*' && str[str.size()-1]=='/'){
    cout<<"multiple line comment"<<endl;
}
else{
    cout<<"not a comment"<<endl;
}


return 0;
}
