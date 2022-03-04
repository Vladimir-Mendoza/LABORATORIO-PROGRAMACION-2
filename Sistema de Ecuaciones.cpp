#include <iostream>
#include <cmath>//Bibliotecas a utilizar

using namespace std; //El std de aqui, se utiliza para no ponerle std a cada un a de las
//acciones o funciones del programa
double a, b, c, d, e, f, x, y; //declaración de las variables a utilizar

int main() //función principal
{
cout.precision (4);
cout<<"						SISTEMA DE ECUACIONES 2 X 2"<<endl;
cout<<"													ETN - 307L"<<endl<<endl;
cout<<" El programa ayuda a el calculo de las soluciones de un sistema de ecuaciones donde hay 2 incognitas de la forma:"<<endl<<endl;
cout<< "							ax + by = c"<<endl; //Primera ecuación en la cual se despejara Y
cout<<" y"<<endl;
cout<<"							dx + ey = f"<<endl<<endl; //segunda ecuación en la cual se despejara X y se sustituirá Y
//y quedara en función de X para encontrar el valor de esta misma variable (X)
cout<<"Ingresa los valores que deseas que tenga el sistema de ecuaciones de la forma ya vista"<<" :"<<endl<<endl;
cout<<"Valor de a "<<": "; cin>>a; //ingresar o conocer el valor que tendrá a en la primera ecuación
cout<<"Valor de b "<<": "; cin>>b; //ingresar o conocer el valor que tendrá b en la primera ecuación
cout<<"Valor de c "<<": "; cin>>c; //ingresar o conocer el valor que tendrá c en la primera ecuación
cout<<"Valor de d "<<": "; cin>>d; //ingresar o conocer el valor que tendrá d en la segunda ecuación
cout<<"Valor de e "<<": "; cin>>e; //ingresar o conocer el valor que tendrá e en la segunda ecuación
cout<<"Valor de f "<<": "; cin>>f; //ingresar o conocer el valor que tendra f en la segunda ecuación

y=((c*d)-(f*a))/((d*b)-(a*e)); //Y es el resultado de despejarla de las 2 ecuaciones, por el metodo de suma y resta de sistemas de ecuaciones 2x2
cout<<"						El valor de y = "<<y<<endl; //resultado de la operación anterior

x=(c-(b*y))/a; //es el resultado de despejar x en la primera ecuación y de sustituir el valor
//de Y anterior para que todo quede en función de X y poder obtener su valor
cout<<"						El valor de x = "<<x<<endl; //resultado de la operación anterior

return 0;
}

