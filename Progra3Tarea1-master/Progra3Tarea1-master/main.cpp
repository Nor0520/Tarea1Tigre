#include "Evaluador.h"
#include <iostream>
using namespace std;

//Devuelve la suma de a (dado) y b (dado)
int sumar(int a, int b)
{
    return a+b;
}

//Devuelve la resta de a (dado) y b (dado)
int restar(int a, int b)
{
    return a-b;
}

//Devuelve la multiplicacion de a (dado) y b (dado)
int multiplicar(int a, int b)
{
    return a*b;
}

//Devuelve la division de a (dado) y b (dado)
int dividir(int a, int b)
{
    return a/b;
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMayor(int a, int b)
{
    int mayor=a;
    if (b>a){
        mayor=b;
    }
    return mayor;
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMenor(int a, int b)
{
    int menor=a;
    if (b<a){
        menor=b;
    }
    return menor;

}

//Devuelve el numero mayor entre a (dado), b (dado) y c (dado)
int getMayor(int a, int b, int c)
{
    int mayor=a;

    if(b>c && b>a){
        mayor=b;
    }else if(c>b && c>a){
        mayor=c;
    }

    return mayor;

}

//Establece el valor (dado) en el arreglo (dado) en el indice posicion (dado)
void setValor(int arreglo[], int valor, int posicion)
{
    arreglo[posicion]=valor;

}

//Obtiene y devuelve el valor del arreglo (dado) en el indice posicion (dado)
int getValor(int arreglo[], int posicion)
{
    return arreglo[posicion];
}

//Devuelve el numero mayor del arreglo (dado) que contiene tamano (dado) elementos
int getMayor(int arreglo[], int tamano)
{
   int mayor=arreglo[0];

   for(int x=0;x<tamano;x++){
    if(mayor<arreglo[x]){
        mayor=arreglo[x];
    }
   }
   return mayor;
}

//Devuelve el numero menor del arreglo (dado) que contiene tamano (dado) elementos
int getMenor(int arreglo[], int tamano)
{
    int menor=arreglo[0];

   for(int x=0;x<tamano;x++){
    if(menor>arreglo[x]){
        menor=arreglo[x];
    }
   }
   return menor;
}

//Devuelve el promedio de los numeros del arreglo (dado) que contiene tamano (dado) elementos
int getPromedio(int arreglo[], int tamano)
{
    int promedio,suma=0;
    for(int x=0;x<tamano;x++){
    suma=arreglo[x];

    for(int y=0;y<tamano;y++){
        promedio=(suma/arreglo[x]);
    }
   }
   return promedio;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
