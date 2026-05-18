#include <iostream>
#include <math.h>
using namespace std;
int main(){
    //Declarar de variable
    int numero;
    float potencia, raiz;
    //INGRESO DE DATOS
    cout<<"Ingrese un valor: ";
    cin>>numero;
    //potencia= numero*numero*numero; // numero al cuadrado
    potencia= pow(numero,3); // pow(base, exponente)
    raiz= sqrt(numero); //raiz cuadrada
    cout<<"La potencia al cuadrado de "<<numero<<" es = "<<potencia<<endl;
    cout<<"La raiz cuadrada de "<<numero<<" es = "<<raiz<<endl;
    cout<<"La raiz cubica de "<<numero<<" es = "<<pow(numero,(1/3.0))<<endl;

    return 0;
}