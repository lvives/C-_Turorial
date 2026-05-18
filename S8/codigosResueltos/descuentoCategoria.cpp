#include <iostream>
using namespace std;

int main(){
    char categoria;
    int numCreditos;
    double montoCategoria,montoBase, adicional, montoFinal;
    cout<<"Ingrese su categoria: ";
    cin>>categoria;
    cout<<"Ingrese el numero de creditos a llevar: ";
    cin>>numCreditos;
    if(categoria== 'A' || categoria=='a'){
        montoCategoria=120;
    }else
        if(categoria=='B' || categoria=='b'){
            montoCategoria=100;
        }else
            if(categoria=='C' || categoria=='c'){
                montoCategoria=80;
            }
    //Monto base es montoCategoria*numCreditos
    montoBase=montoCategoria*numCreditos;
    if (numCreditos>20)
        montoFinal=montoBase - (montoBase*0.10);
    else
        if(numCreditos>=15)
            montoFinal=montoBase*0.95; //montoBase-(montoBase*0.05)
        else
            montoFinal=montoBase*1.08; //montoBase+(montoBase*0.08)
    cout<<"Su categoria es: "<<categoria<<endl;
    cout<<"La cantidad de credito es: "<<numCreditos<<endl;
    cout<<"Su monto base es: "<<montoBase<<endl;
    cout<<"El monto final a pagar es: "<<montoFinal<<endl;
    
    return 0;
}