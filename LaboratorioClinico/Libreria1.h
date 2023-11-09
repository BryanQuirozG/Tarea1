#ifndef LIBRERIACADENAS_H_INCLUDED
#define LIBRERIACADENAS_H_INCLUDED
#include <string>
#include <string.h>
#include <conio.h>
using namespace std;
//declaracion de subprogramas

void ingresoDato(string direccion);
void mercaderiaMedicinas();
void comparaMedi();
void usuarioMedi();

///variables
int telefono;
string direccion;
string nombre,apellido,usuarioM,ide;
int edad;
char nombrePaciente[30], apellidoPaciente[30];


//implementacion


void ingresoDato(string direccion){

   int  edadP;
    const char CORREO[] ="124@.gmail.com";
    const char USUARIO[]="15";
    char cadenaIS[30]="DATOS DEL PACIENTE";
    char subcadenaIS[30];
    strncpy(subcadenaIS, cadenaIS,10);
    strncpy(subcadenaIS, cadenaIS,21);
    cout << "==========================================================" << endl;
    cout<<"   "<<subcadenaIS<< " (uso de subcadena strncpy)"<<endl;
    cout << "==========================================================" << endl;
    cout<<"ingrese sus nombre: ";
    fflush(stdin);
    cin.getline(nombrePaciente,30);
    strlwr(nombrePaciente);//MAYUSCULA A MINUSCULA
    cout<<"ingrese sus apellido: " ;
    fflush(stdin);
    cin.getline(apellidoPaciente,30);
    strlwr(apellidoPaciente);
    //concatenar tipo char
    strcat(nombrePaciente," ");
    strcat(nombrePaciente,apellidoPaciente);
    //usuario subcadena tipo char
    char subUsuario[30];
    memcpy(subUsuario,nombrePaciente,4);
    ///concatenenar
    strcat(subUsuario,USUARIO);
    //--------------------------------------
    char subCorreo[30];
    memcpy(subCorreo,apellidoPaciente,4);
    strrev(subCorreo);
    //concatenar creacion de correo
    cout<<"ingrese su edad: ";
    cin>>edadP;
     while((edadP<18)||(edadP>75)){
        cout << "Ingrese una edad CORRRECTA"<<endl;
        cin >> edadP;
    }

    cout<<"direccion del paciente por favor: ";
    fflush(stdin);
    getline(cin,direccion);
    for(int i=0;i<direccion.size();i++){//uso de la funcion .size(concatenar)
    direccion[i]=tolower(direccion[i]);
    }
    setlocale(LC_ALL,"Spanish");
    cout << "|========================================================================================================================|" << endl;
    cout << "                  DATOS DEL PACIENTE (uso de funciones tipo char)"<< endl;
    cout << "|========================================================================================================================|" << endl;
    cout << "El paciente "<<nombrePaciente<<" |(strlwr mayuscula a minuscula, concateno con strcat )"<<endl;
    cout << "USUARIO: "<< subUsuario<<" |memcpy subcadena nombre concatenar strcat con variable const char" <<endl;
    cout << "Correo Electrónico: "<<subCorreo<<" |(strrev invertir apellido con memcpy se escogieron 4 elementos, strcat unio con const variable "<<endl;
    cout << "Direccion: "<< direccion <<" |strlwr e invocacion de variable " <<endl;
    cout << "|========================================================================================================================|" << endl;
    system("pause");

}

void mercaderiaMedicinas(){
 char mercaderia [10], servicio[10];
 char mercaderiaServicio[20];
 const char espa[2]="";
 cout<<"concatenar cadena de caracteres"<<endl;
 cout<<"Ingresar que tipo de medicina"<<endl;
cin>>mercaderia;
cout<<"Ingresar servicio"<<endl;
cin>>servicio;

strcat(mercaderiaServicio, mercaderia);
strcat(mercaderiaServicio, espa);
strcat(mercaderiaServicio, servicio);

cout<<"Su medicina es :"<<mercaderia<<endl;
cout<<" Su servicio es :"<<servicio<<endl;
cout<<"Su medicia  y su servicio es :"<<" "<<mercaderiaServicio<<endl;

}

 void usuarioMedi(){


 char usuarioI [10], usuarioE[10];
 cout<<"Comparo cadena de caracteres"<<endl;
 cout<<"Ingresar usuario"<<endl;
cin>>usuarioI;
cout<<"Validar usuario"<<endl;
cin>>usuarioE;
if(strcmp(usuarioI,usuarioE)!=0){
    cout<<"Usuario ingresado no es correcto"<<endl;

 }else{
     cout<<"Usuario ingresado es correcto"<<endl;
}
}
void subMedi(){

string mensaje;
string cadena1, cadena2;

mensaje="Bienvenido al Laboratorio Clinico online ";
cout<<"El tamaño de la cadena mensaje con lengt: "<< mensaje.length()<<endl;
cout<<"El tamaño de la cadena mensaje es: "<< mensaje.size()<<endl;
cadena1= mensaje.substr(0,14);
cadena2= mensaje.substr(14);

cout<<"La primera cadena es: " <<cadena1<<endl;
cout<<"La segunda cadena es: " <<cadena2<<endl;

}


#endif // LIBRERIACADENAS_H_INCLUDED
