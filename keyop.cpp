#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
cout<<"Enter a string: ";
cin>>str;
if(str=="+" || str=="-" || str=="*" || str=="/" || str=="%"){
    cout<<"Arithmetic operator"<<endl;
}
else if(str==">" || str=="<" || str=="<=" || str==">=" || str=="==" || str=="!="){
    cout<<"Relational operator"<<endl;
}
else if(str=="=" || str=="+=" || str=="-=" || str=="/=" || str=="%=" || str=="*=" || str=="&=" || str=="|=" || str=="^=" || str==">>=" || str=="<<="){
    cout<<"Assignment Operator"<<endl;
}
else if(str=="&&" || str=="||" || str=="!"){
    cout<<"Logical Operator"<<endl;
}
else if(str=="&" || str=="|" || str=="^" || str=="~" || str=="<<" || str==">>"){
     cout<<"Bitwise Operator"<<endl;
}
else if(str=="->" || str=="*"){
     cout<<"Pointer Operator"<<endl;
}
else if(str=="."){
     cout<<"Access Operator"<<endl;
}
else if(str=="int" || str=="double" || str=="do" || str=="while" || str=="char" || str=="float" || str=="string" || str=="if" || str=="else"){
        cout<<"Keyword"<<endl;
}
 return 0;

}
