#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int t;
    cout<<"Enter number of test case : ";
    cin>>t;
    while(t--){
        cout<<"Enter a Operator or Keyword : ";
        cin>>s;
        cout<<endl;
        if(s=='+'||s=='-'||s=='*'||s=='/'||s=='%'||s=='++'||s=='--'){
            cout<<"Arithmetic Operator"<<endl;
        }
        if(s=='=='||s=='>'||s=='>='||s=='<'||s=='<='||s=='!='){
            cout<<"Relational Operator"<<endl;
        }
        if(s=='='||s=='+='||s=='-='||s=='/='||s=='%='||s=='*='||s=='&='||s=='|='||s=='^='||s=='>>='||s=='<<='){
            cout<<"Assignment Operator"<<endl;
        }
        if(s=='&&'||s=='||'||s=='!'){
            cout<<"Logical Operator"<<endl;
        }
        if(s=='&'||s=='|'||s=='^'||s=='~'||s=='<<'||s=='>>'){
            cout<<"Bitwise Operator"<<endl;
        }
        if(s=='->'||s=='*'){
            cout<<"Pointer Operator"<<endl;
        }
        if(s=='.'){
            cout<<"Access Operator"<<endl;
        }
        if(s=='auto'||s=='break'||s=='case'||s=='char'||s=='const'||s=='continue'||s=='default'||s=='do'||s=='double'||
           s=='enum'||s=='extern'||s=='float'||s=='for'||s=='goto'||s=='if'||s=='int'||s=='long'||s=='register'||
           s=='return'||s=='short'||s=='signed'||s=='sizeof'||s=='static'||s=='struct'||s=='switch'||s=='typedef'||s=='union'||
           s=='unsigned'||s=='void'||s=='volatile'||s=='while'||s=='asm'||s=='dynamic_cast'||s=='namespace'||s=='reinterpret_cast'||s=='bool'||
           s=='explicit'||s=='new'||s=='static_cast'||s=='false'||s=='catch'||s=='operator'||s=='template'||s=='friend'||s=='private'||
           s=='class'||s=='this'||s=='inline'||s=='public'||s=='throw'||s=='const_cast'||s=='delete'||s=='mutable'||s=='protected'||
           s=='true'||s=='try'||s=='typeid'||s=='typename'||s=='using'||s=='virtual	wchar_t'){
            cout<<"Keyword"<<endl;
        }
    }
    return 0;
}
