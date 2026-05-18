#include <iostream>
using namespace std;
int main(){
    int edad,tipoRetiro;
    int mesesDesempleo,anioAporte;
    double fondoAFP,porcentajeBase,bonificacion,porcentajeFinal,montoRetiro;
    double montoFinal;
    cout<<"Ingrese la edad del afiliado: ";
    cin>>edad;
    cout<<"Tipo de retiro"<<endl;
    cout<<"[1] Emergencia"<<endl;
    cout<<"[2] Desempleo"<<endl;
    cout<<"[3] Jubilación anticipada"<<endl;
    cout<<"Ingrese una opción: ";
    cin>>tipoRetiro;
    cout<<"Ingrese el monto total acumulado en AFP: ";
    cin>>fondoAFP;
    if(edad>0 && fondoAFP>0 && tipoRetiro>=1 && tipoRetiro<=3){
        if(tipoRetiro==2){
            cout<<"Ingrese los meses de desempleo: "<<endl;
            cin>>mesesDesempleo;
        }
        if(tipoRetiro==3){
            cout<<"Ingrese los anios de aporte al AFP: "<<endl;
            cin>>anioAporte;
        }
        if((tipoRetiro==2 && mesesDesempleo<0) || (tipoRetiro==3 && anioAporte<0))
            //f && F || V && V
            cout<<"Erros: Datos inválidos"<<endl;
        else{

            if(edad<40){
                if(tipoRetiro==1)
                    porcentajeBase=0.20;
                else{
                    if(tipoRetiro==2)
                        if(mesesDesempleo>12)
                            porcentajeBase=0.25;
                        else
                            porcentajeBase=0;
                    else  // Si tipoRetiro==3
                        porcentajeBase=0;
                }
            }else{
                if(edad<60){
                    if(tipoRetiro==1)
                        porcentajeBase=0.30;
                    else{
                        if(tipoRetiro==2)
                            if(mesesDesempleo>12)
                                porcentajeBase=0.35;
                            else 
                                porcentajeBase=0;
                        else // Si tipoRetiro==3
                            if(edad>50 && anioAporte>20)
                                porcentajeBase=0.50;
                            else 
                                porcentajeBase=0;
                    }
                }else{
                    porcentajeBase=0.955;
                }
            }
            //bonificación
            if(tipoRetiro==3 && porcentajeBase>0)
                bonificacion=0.02*(anioAporte/5.0);
            else
                bonificacion=0;
            //porcentajes finales
            porcentajeFinal=porcentajeBase+bonificacion;
            montoRetiro=fondoAFP*porcentajeFinal;
            //penalización
            if(fondoAFP<10000)
                montoFinal=montoRetiro*0.95;
            else 
                montoFinal=montoRetiro;
            //validamos que el porcentajeBase sea mayor a 0
            if(porcentajeBase>0){
                cout<<"El monto permitido a retirar: S/. "<<montoFinal<<endl;
                if(fondoAFP<10000)
                    cout<<"El monto acumulado es menor a S/. 10000";
            }else
                cout<<"Retiro no permitido"<<endl;
        }
    }else
        cout<<"Error: Datos invalidos"<<endl;
    return 0;
}