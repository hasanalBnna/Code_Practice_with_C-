#include<iostream>
using namespace std;
int main(){
int i;
char str[i];
cout<<"enter the size of array: ";
cin>>i;
cout<<"enter character: ";
cin>>str[i];
if(str[0]=='//'){
    cout<<"it is cmmnt";
}else{
cout<<"it is not cmmnt";
}
return 0;
}
