#include<iostream>
#include<stdio.h>
#include<math.h>
#define PI 3.1415926536

using namespace std;

double a, b, c, A, B, C, Area, rad1, rad2, rad3;	

int main()
{
cout.precision(4);
cout<<"						RESOLUCION DE TRIANGULOS"<<endl;
cout<<"													ETN - 307L"<<endl<<endl;
cout<<" El programa ayuda a el calculo de los 3 lados o 3 angulos dependiendo del caso."<<endl;
cout<<" Recordar que en todo triangulo los lados estaran en orden a sus angulos opuestos."<<endl;
cout<<" Ejemplo : En un triangulo rectangulo la hipotenusa tiene como angulo opuesto al unico angulo recto de 90 (grados)."<<endl<<endl;
cout<<" Entonces podemos decir que :"<<endl<<endl;
cout<<" 					El lado 'a' tiene como angulo opuesto a 'A'."<<endl;
cout<<" 					El lado 'b' tiene como angulo opuesto a 'B'."<<endl;
cout<<" 					El lado 'c' tiene como angulo opuesto a 'C'."<<endl<<endl;
cout<<" Una vez explicado procedemos al calculo :"<<endl<<endl;

int x;
cout<<"					Digite 1	Si tiene como dato 3 lados"<<endl;
cout<<"					Digite 2	Si tiene como dato 2 lados y 1 angulo"<<endl;
cout<<"					Digite 3	Si tiene como dato 1 lado y 2 angulos"<<endl<<endl;
cin>> x;
		
switch (x)		
	{
	case 1:
		
		cout<<"					Ingresa los valores de los lados del triangulo"<<endl<<endl;
		cout<<"	Valor de a = "; cin>> a;
		cout<<"	Valor de b = "; cin>> b;
		cout<<"	Valor de c = "; cin>> c;
		
		A=((acos(((b*b)+(c*c)-(a*a))/(2*b*c)))*180)/PI;
		B=((acos(((a*a)+(c*c)-(b*b))/(2*a*c)))*180)/PI;
		C=((acos(((a*a)+(b*b)-(c*c))/(2*a*b)))*180)/PI;
		
		rad3=(C*PI)/180;
		Area=(b*a*sin(rad3))/2;
		
		cout<<"					El resultado de A es = " <<A<<" grados"<<endl;
		cout<<"					El resultado de B es = " <<B<<" grados"<<endl;
		cout<<"					El resultado de C es = " <<C<<" grados"<<endl<<endl;
		cout<<"					El Area del triangulo es = "<<Area<<" u2"<<endl;
		
		break;
		
	case 2:
		
		cout<<"					Ingresa los valores de los lados del triangulo"<<endl<<endl;
		cout<<"	Valor de a = "; cin>> a;
		cout<<"	Valor de b = "; cin>> b;
		cout<<"					Ingresa el angulo del triangulo"<<endl<<endl;
		cout<<"	Valor de A = "; cin>> A;
		
		rad1=(A*PI)/180;
		B=((asin((b*sin(rad1))/a))*180)/PI;
		C=180-A-B;
		
		rad3=(C*PI)/180;
		c=(a*sin(rad3))/sin(rad1);
		Area=(b*a*sin(rad3))/2;
		
		cout<<"					El resultado de B es = " <<B<<" grados"<<endl;
		cout<<"					El resultado de C es = " <<C<<" grados"<<endl;
		cout<<"					El resultado de c es = " <<c<<" u"<<endl<<endl;
		cout<<"					El Area del triangulo es = "<<Area<<" u2"<<endl;
	
		break;
		
	case 3:
		
		cout<<"					Ingresa el lado del triangulo"<<endl<<endl;
		cout<<"	Valor de c = "; cin>> c;
		cout<<"					Ingresa los angulos del triangulo"<<endl<<endl;
		cout<<"	Valor de A = "; cin>> A;
		cout<<"	Valor de B = "; cin>> B;
		
		rad1=(A*PI)/180;
		C=180-A-B;
		rad2=(B*PI)/180;	
		
		rad3=(C*PI)/180;
		a=(c*sin(rad1))/sin(rad3);
		b=(c*sin(rad2))/sin(rad3);
		
		Area=(b*a*sin(rad3))/2;
		
		cout<<"					El resultado de C es = " <<C<<" grados"<<endl;
		cout<<"					El resultado de a es = " <<a<<" u"<<endl;
		cout<<"					El resultado de b es = " <<b<<" u"<<endl<<endl;
		cout<<"					El Area del triangulo es = "<<Area<<" u2"<<endl;
	
		break;	
	}
	return 0;
	}	


