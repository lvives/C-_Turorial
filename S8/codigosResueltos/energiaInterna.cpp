#include <iostream>
#include <math.h>
using namespace std;

/*n: n´umero de moles (mol)
T : temperatura absoluta (K)
V : volumen del contenedor (L)
a: constante del gas (J·L/mol2)*/
int main(){
    double nmoles,temperatura,volumen,constanteGas;
    double R=0.0821;
    double U,UJ;
    string clasificacion;
    cout<<"Ingrese el número de moles: ";
    cin>>nmoles;
    cout<<"Ingrese la temperatura absoluta en k: ";
    cin>>temperatura;
    cout<<"Ingrese el volumen del contenedor en L: ";
    cin>>volumen;
    cout<<"Ingrese constante del gas: ";
    cin>>constanteGas;
    if(nmoles>0 && temperatura>0 && volumen>0 && constanteGas>=0){
        if(volumen>5){
            U=(3/2.0)*nmoles*R*temperatura-(constanteGas*nmoles*nmoles)/volumen;
        }else{
            if(volumen>=2){
                U=(2.0)*nmoles*R*temperatura-(constanteGas*nmoles*nmoles)/volumen;
            }else{
                U=(3/2.0)*nmoles*R*temperatura-2*((constanteGas*nmoles*nmoles)/volumen);
            }
        }
        //hallamos UJ
        UJ=U*101.325;
        if(UJ<1000)
            clasificacion="Baja";
        else
            if(UJ<8000) //if(UJ>=1000 && uJ<8000))
                clasificacion="Media";
            else
                clasificacion="Alta";
        //SALIDA
        cout<<"Energía interna en julios: "<<UJ<< " J"<<endl;
        cout<<"Clasificación: "<<clasificacion<<endl;
    } else{
        cout<<"Error: Datos inválidos"<<endl;
    }

    return 0;
}