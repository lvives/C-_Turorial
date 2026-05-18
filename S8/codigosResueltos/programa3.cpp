#include <iostream>
#include <math.h>
using namespace std;

#define p_i 3.1416   //definimos una variable global

/*Radio del cilindro Rc.
Altura del cilindro hc.
Radio del cono Rk.
Generatriz del cono g.
Radio de la esfera Re*/

int main(){
    /*DECLARACIÖN DE VARIABLES*/
    double radioCilindro,alturaCilindro,radioCono,generatrizCono,radioEsfera;
    double areaClindro, areaCono,areaEsfera,areaTotal;
    /*INGRESO DE DATOS*/
    cout<<"Ingrese el radio del cilindro: ";
    cin>>radioCilindro;
    cout<<"Ingrese la altura del cilindro: ";
    cin>>alturaCilindro;
    cout<<"Ingrese el radio del cono: ";
    cin>>radioCono;
    cout<<"Ingrese la generatriz del cono: ";
    cin>>generatrizCono;
    cout<<"Ingrese el radio de la esfera: ";
    cin>>radioEsfera;
    /*PROCESO*/
    areaClindro=2*p_i*radioCilindro*(alturaCilindro+radioCilindro);
    areaCono=p_i*radioCono*(generatrizCono+radioCono);
    areaEsfera=4*p_i*pow(radioEsfera,2); //4*p_i*(radioEsfera*radioEsfera)
    areaTotal=areaClindro+areaCono+areaEsfera;
    /*SALIDA*/
    cout<<"Area del cilindro                : "<<areaClindro<<endl;
    cout<<"Area del cono                    : "<<areaCono<<endl;
    cout<<"Area de la esfera                : "<<areaEsfera<<endl;
    cout<<"Area total de recubrimiento      : "<<areaTotal<<endl;





    return 0;
}