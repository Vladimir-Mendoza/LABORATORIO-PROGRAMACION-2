#include <iostream>
#include<math.h>

using namespace std;

double a, b, c, d, e, p, q, r;
double A, B, C, P, Q;

int main()
{
cout.precision(4);
cout<<"					DIVISION DE POLINOMIOS POR HORNER"<<endl;
cout<<"													ETN - 307L"<<endl<<endl;
cout<<" El programa ayuda a el calculo de la division de 2 polinomios."<<endl<<endl;
cout<<" En el mumerador se tiene un maximo de polinomios de cuarto grado o menores de la forma :"<<endl<<endl;
cout<<" 					ax4 + bx3 + cx2 + dx + e"<<endl<<endl;
cout<<" En el denominador se tiene un maximo de polinomios de segundo grado o menores de la forma :"<<endl<<endl;
cout<<" 						px2 + qx + r"<<endl<<endl;

cout<<" Ingrese valores para el numerador"<<endl<<endl;
cout<<"		Ingrese un valor para a(x4) = "; cin>>a;
cout<<"		Ingrese un valor para b(x3) = "; cin>>b;
cout<<"		Ingrese un valor para c(x2) = "; cin>>c;
cout<<"		Ingrese un valor para d(x) = "; cin>>d;
cout<<"		Ingrese un valor para e = "; cin>>e;

cout<<"\n\n Ingrese valores para el denominador"<<endl<<endl;
cout<<"		Ingrese un valor para p(x2) = "; cin>>p;
cout<<"		Ingrese un valor para q(x) = "; cin>>q;
cout<<"		Ingrese un valor para r = "; cin>>r;

A=a/p;
B=((b*p)-(a*q))/(p*p);
C=((c*(p*p))-(a*p*r)+(a*(q*q))-(b*p*q))/(p*p*p);

P=((d*(p*p*p))+(2*a*q*p*r)-(b*r*(p*p))+(b*p*(q*q))-(a*(q*q*q))-(c*q*(p*p)))/(p*p*p);
Q=((e*(p*p*p))+(b*q*p*r)-(a*r*(q*q))+(a*p*(r*r))-(c*r*(p*p)))/(p*p*p);

cout<<"\n\n				El Cociente es = " <<A<<" x2 + "<<B<<" x + "<<C<<endl;
cout<<"\n\n				El Residuo es = " <<P<<" x + "<<Q<<endl;

return 0;
}
