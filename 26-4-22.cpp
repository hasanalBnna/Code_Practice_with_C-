 #include<bits/stdc++.h>
 using namespace std;
 void checkc(string line[]){
 if(line[0] == '/' && line[1] == '/' && line[2] != '/'){
    cout<<"its single line comment"<<endl;
    return;
 }
 else if(line[line.size() -2 ] == '*' && line[line.size() - 1] == '/' && line[0] == '/' && line[1] == '*'){
    cout<<"its mutiple cmmnt"<<endl;
    return;
 }
 else{
    cout<<"not cmmnt"<<endl;
 }

 }
 int main(){
 char line[];
 cout<<"enter string: ";
 cin>>line[];
 chechc(line);

 return 0;
 }
