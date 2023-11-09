#ifndef LIBRERIAINFORMACION_H_INCLUDED
#define LIBRERIAINFORMACION_H_INCLUDED
#include "Informacion.h"
#include "Medicina.h"
#include <string>
#include <string.h>
#include <conio.h>
using namespace std;
//declaracion de subprogramas
void encabezado();
void menuP();
void registro();
void compraMedic(float vIva, float subTotal);



//declaracion de variables globales
char correo[30], id[10], nombrUsu[10], numTarjeta[18];
const string CORREO1 = "bryan@gmail.com";
int eleccion;
int opcDatos;
const char UNIVERSIDAD[]="UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE";
const int TAREA =1;
char tema[]="LABORATORIO CLINICO ";
const string INGENIERA="Veronica Martinez";

//implementacion
void encabezado(){
	string datos[]={"Nombres: Bryan Alexander Quiroz Gonzalez", "NRC: 16129", "Materia: Programacion Orientada a Objetos"};
	cout<<"==================================================================="<<endl;
	cout<<"                "<<UNIVERSIDAD<<endl;
	cout<<"==================================================================="<<endl;
	cout<<"    TEMA: "<<tema<<endl;
	cout<<"    UNIDAD 1 TAREA "<<TAREA<<endl;
	cout<<"    "<<"DOCENTE: "<<INGENIERA<<endl;
	for(int i=0; i<3; i++){
		cout<<"    "<<datos[i]<<endl;
	}

	cout<<"==================================================================="<<endl;
 system ("pause");
}
void registro(){


         do{
    cout << "============================================================================" << endl;
    cout << "I Para tener accceso a los sevicios de nuestro Laboratrio Clinico debe registrarse I"<< endl;
    cout << "                    ¿Posee usted un e-mail?                                 "<< endl;
    cout << "============================================================================"<< endl;
    cout << "                         1. Si         2. No                                       "<< endl;
    cout << "============================================================================"<< endl;
    cin >> eleccion;

    switch(eleccion){

    case 1:
    cout << "============================================================================"<< endl;
    cout << "Por favor ingrese su e-mail(bryan@gmail.com)" << endl;
    cin >>correo;

    while(correo!=CORREO1){
     cout << "Correo no valido, por favor intente de nuevo" << endl;
     cin >>correo;
     }
    cout << "                      Bienvenid@ Bryan Quiroz"                             << endl;
    cout << "============================================================================"<< endl;

    break;

    case 2:
    cout << "============================================================================"<< endl;
    cout << "  Como no poseee un e-mail podra registrarse como usuario del Laboratorio Clinico  "<< endl;
    cout << "============================================================================"<< endl;
    cout << "Continue con su registro utilizando su identificacion " << endl;
    cout << "============================================================================"<< endl;
    cin >> id;
    cout << "Ingrese un nombre de usuario " << endl;
    cin >> nombrUsu;
    cout << "============================================================================"<< endl;
    cout << "              Bienvenid@"<<" "<< nombrUsu<<" "<<"con id:"<< id                  << endl;
    cout << "============================================================================"<< endl;
    break;

    default:
    cout << "Opcion incorrecta, intente de nuevo. " << endl;
    registro();
    }
    }while(!(eleccion<3));
    }

void menuP(){
     float vIva, subTotal;
int opc; //variables locales
do{
    string mensaje = "BIENVENIDOS AL LABORATORIO CLINICO ";
    string subMen1, subMen2;
    subMen1 = mensaje.substr(0,35);
    subMen2 = mensaje.substr(35);
    cout<<"================================================="<<endl;
    cout<< "       " <<subMen1<<"\n               "<<subMen2 <<endl;
    cout<<"================================================="<<endl;
    cout<<" 1. INGRESO DEL REGISTRO ONLINE DEL LABORATORIO CLINICO"<<endl;
    cout<<" 2. ENFERMEDADES"<<endl;
    cout<<" 3. PRODUCTO A VENDER"<<endl;
    cout<<" 4. SALIR"<<endl;
    cout<<"================================================="<<endl;
    cout<<"BIENVENIDOS AL LABORATORIO CLINICO ----PRECIONE OCP QUE DESEE: ";
    cin>>opc;
    switch(opc){
case 1:
    registro();
    ingresoDato(direccion);
    mercaderiaMedicinas();
    usuarioMedi();
    subMedi();
    break;
case 2:
    registroEnfermedades();
    insercionNombrEnfermedad();
    break;
case 3:
    productOrden();
    busquedaSecuencial();
    int a, b;

    //Llamada de subprograma
    recursividad();
    system ("pause");
    cout << "=================================" << endl;
    cout << "Pasando parámetros por referencia" << endl;
    cout << "=================================" << endl;
    a = 10; b = 20;
   cout << "a,b ->" << a << ", " << b << endl;
   cout << "funcion(a,b) ->" << funcion(a, b) << endl;
   cout << "a,b ->" << a << ", " << b << endl;

    //Recursividad
    insercion();
    secuencial();
     compraMedic(vIva, subTotal);
    break;
case 4:

    cout << "===========================" << endl;
    cout << "         SALIR       "       << endl;
    cout << "   Gracias por su visita"    << endl;
    cout << "===========================" << endl;
    break;
default:
    cout<<"----------------------------"<<endl;
    cout<<"NO CONTAMOS CON ESA OPCION, VUELVA A INTERTARLO"<<endl;
    cout<<"----------------------------"<<endl;
}
}while(opc!=4);
}


#endif // LIBRERIAINFORMACION_H_INCLUDED
