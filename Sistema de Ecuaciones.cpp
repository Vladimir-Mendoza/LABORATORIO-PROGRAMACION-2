#include <iostream>
#include <cmath>//Bibliotecas a utilizar

using namespace std; //El std de aqui, se utiliza para no ponerle std a cada un a de las
//acciones o funciones del programa
double a, b, c, d, e, f, x, y; //declaraci�n de las variables a utilizar

int main() //funci�n principal
{
cout.precision (4);
cout<<"						SISTEMA DE ECUACIONES 2 X 2"<<endl;
cout<<"													ETN - 307L"<<endl<<endl;
cout<<" El programa ayuda a el calculo de las soluciones de un sistema de ecuaciones donde hay 2 incognitas de la forma:"<<endl<<endl;
cout<< "							ax + by = c"<<endl; //Primera ecuaci�n en la cual se despejara Y
cout<<" y"<<endl;
cout<<"							dx + ey = f"<<endl<<endl; //segunda ecuaci�n en la cual se despejara X y se sustituir� Y
//y quedara en funci�n de X para encontrar el valor de esta misma variable (X)
cout<<"Ingresa los valores que deseas que tenga el sistema de ecuaciones de la forma ya vista"<<" :"<<endl<<endl;
cout<<"Valor de a "<<": "; cin>>a; //ingresar o conocer el valor que tendr� a en la primera ecuaci�n
cout<<"Valor de b "<<": "; cin>>b; //ingresar o conocer el valor que tendr� b en la primera ecuaci�n
cout<<"Valor de c "<<": "; cin>>c; //ingresar o conocer el valor que tendr� c en la primera ecuaci�n
cout<<"Valor de d "<<": "; cin>>d; //ingresar o conocer el valor que tendr� d en la segunda ecuaci�n
cout<<"Valor de e "<<": "; cin>>e; //ingresar o conocer el valor que tendr� e en la segunda ecuaci�n
cout<<"Valor de f "<<": "; cin>>f; //ingresar o conocer el valor que tendra f en la segunda ecuaci�n

y=((c*d)-(f*a))/((d*b)-(a*e)); //Y es el resultado de despejarla de las 2 ecuaciones, por el metodo de suma y resta de sistemas de ecuaciones 2x2
cout<<"						El valor de y = "<<y<<endl; //resultado de la operaci�n anterior

x=(c-(b*y))/a; //es el resultado de despejar x en la primera ecuaci�n y de sustituir el valor
//de Y anterior para que todo quede en funci�n de X y poder obtener su valor
cout<<"						El valor de x = "<<x<<endl; //resultado de la operaci�n anterior

return 0;
}

