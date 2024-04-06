#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int x[6];
int y;
while(t>0){
cout<<"entr integer:";
cin>>y;
cout<<"enter array elemant:";
cin>>x[6];
 t=t-1;
}
    int key = 1;

    bool present = false;
    for(int i:x){
        if(i == key){
            present = true;
            break;
        }
    }
    if (present){
        cout << "The element is present";
    }else{
        cout << "The elment is not present";}
return 0;
}
