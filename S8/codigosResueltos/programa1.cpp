#include <iostream> // ingreso (cin>>) y salida (cout<<) de datos

using namespace std; // simplifica el comando std -> std::cout<<  | std::cin>>

int main(){
    //esto es un comentario
    /* Varios comentarios
    entre lineas */
    /* DECLARACION DE VARIABLES */

    int edad,numero1, numero2;
    float peso,suma,division,multiplicacion;
    char estadoCivil; // S C V D
    // e p ec -> No es descriptivo

    
    /*INGRESO DE DATOS*/

    cout<<"Bienvenido al live streaming"<<endl; // endl: salto de linea
    cout<<"Ingrese su edad: "; //salidad: Mensaje en pantalla
    cin>>edad; // ingreso de datos
    cout<<"Ingrese su peso: ";
    cin>>peso; // ingreso de datos por teclado
    cout<<"Ingres su estado civil [S C V D]: ";
    cin>>estadoCivil;
    cout<<"Ingrese el numero 1: ";
    cin>>numero1;
    cout<<"Ingrese el numero 2: ";
    cin>>numero2;

    suma=numero1+numero2;
    multiplicacion=numero1*numero2;
    division=numero1/4.0;    //  int/int = int  | int/float= float  | float/int = float | float/float=float
    //casterizacion de una variable es cambiarle su tipo de forma temporal.
    
    // int numero;
    //float resultado;
    // resultado = numero/3.0;

    /*  PROCESO  */

    /*SALIDA DE DATOS */
    cout<<"Su edad es: "<<edad;
    cout<<"\nSu peso es: "<<peso;
    cout<<"\nSu estado civil es: "<<estadoCivil<<endl; // el \n es un salto línea dentro de mensaje
    cout<<"La suma de "<<numero1 << " +  "<<numero2<<" = "<<suma<<endl;
    cout<<"La multiplicacion de "<<numero1 << " *  "<<numero2<<" = "<<multiplicacion<<endl;
    cout<<"La division de "<<numero1 << " /  "<<numero2<<" = "<<division<<endl;

    return 0; // devuelve la ejecució del programa con 0 error
}

//control + s para grabar