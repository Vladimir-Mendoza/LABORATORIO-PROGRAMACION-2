#include <iostream>
#include <cmath>
#define MAX 8

using namespace std;

void mostrar_matriz(int matriz[][MAX], int orden);
int determinante(int matriz[][MAX], int orden);
int cofactor(int matriz[][MAX], int orden, int fila, int columna);

int main()
{
   cout.precision(4);
   cout<<"						DETERMINANTE DE UNA MATRIZ"<<endl;
   cout<<"													ETN - 307L"<<endl<<endl;
   cout<<" El programa ayuda a el calculo del determinante de una matriz (solo matrices cuadradas)."<<endl<<endl;

   int matriz[MAX][MAX];
   int orden;
   
   cout << " Orden de la matriz a calcular (maximo " << MAX << "): ";
   cin >> orden;
   while (orden < 0 || orden > MAX) {
      cout << "\n El orden de la matriz no puede ser mayor que " << MAX << endl;
      cout << " Ingrese nuevamente el orden de la matriz: ";
      cin >> orden;
   }
   
   cout << "\n\n Ingrese los elementos de la matriz:\n\n";
   for (int i = 0; i < orden; i++) {
      for (int j = 0; j < orden; j++) {
         cin >> matriz[i][j];
      }
   }

   cout << "\n Mostrando la matriz digitada:\n";
   mostrar_matriz(matriz, orden);
   
   cout << "\n El determinante es: " << determinante(matriz, orden) << endl;

   cin.get();
   cin.get();
   return 0;
}

void mostrar_matriz(int matriz[][MAX], int orden)
{
   cout << " Orden: " << orden << endl<<endl;
   for (int i = 0; i < orden; i++) {
      for (int j = 0; j < orden; j++) {
         cout << "\t" << matriz[i][j];
      }
      cout << "\n";
   }
}


int determinante(int matriz[][MAX], int orden)
{
   int det = 0.0;
   
   if (orden == 1) {
      det = matriz[0][0];
   } else {
      for (int j = 0; j < orden; j++) {
         det = det + matriz[0][j] * cofactor(matriz, orden, 0, j);
      }
   }
   
   return det;
}


int cofactor(int matriz[][MAX], int orden, int fila, int columna)
{
   int submatriz[MAX][MAX];
   int n = orden - 1;
   
   int x = 0;
   int y = 0;
   for (int i = 0; i < orden; i++) {
      for (int j = 0; j < orden; j++) {
         if (i != fila && j != columna) {
            submatriz[x][y] = matriz[i][j];
            y++;
            if (y >= n) {
               x++;
               y = 0;
            }
         }
      }
   }
   
   return pow(-1.0, fila + columna) * determinante(submatriz, n);
}
