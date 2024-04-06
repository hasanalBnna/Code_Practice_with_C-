#include<iostream>
using namespace std;
int main(){
char str[100];
cout<<"enter something: ";
cin>>str;
cout<<"you have entered: "<< str <<endl;
if(str[0]=='\\' ){
    cout<<"comnnt"<< endl;
}else{
cout<<"not"<<endl;
}

return 0;
}
