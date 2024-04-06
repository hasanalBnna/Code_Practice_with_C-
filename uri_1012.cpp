#include<bits/stdc++.h>
#include<math.h>
#define pi 3.14159
using namespace std;

int main(){
float A,B,C;
cin>>A >>B >>C;
float t=0.5*A*C;
cout<<fixed<<setprecision(3)<<"TRIANGULO: "<<t<<endl;
float ci=pi*pow(C,2);
cout<<fixed<<setprecision(3)<<"CIRCULO: "<<ci<<endl;
float tr=0.5*(A+B)*C;
cout<<fixed<<setprecision(3)<<"TRAPEZIO: "<<tr<<endl;
float sq=pow(B,2);
cout<<fixed<<setprecision(3)<<"QUADRADO: "<<sq<<endl;
float re=A*B;
cout<<fixed<<setprecision(3)<<"RETANGULO: "<<re<<endl;
return 0;
}
