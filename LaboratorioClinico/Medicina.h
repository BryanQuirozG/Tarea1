#ifndef LIBRERIAMEDICINA_H_INCLUDED
#define LIBRERIAMEDICINA_H_INCLUDED
#include <string>
#include <string.h>
#include <conio.h>
using namespace std;
string productos[30];
string enfermedad[40],aux;

int enferC;
string nombreEfermedad[30];
void busquedaSecuencial();
void productOrden();
void registroEnfermedades();
void insercionNombrEnfermedad();

void recursividad();
void insercion();
void secuencial();
int funcion(int &n, int &m);
int binario(int nro);
float recibo (float vIva, float subTotal);
const float IVA = 0.12;
const float SALDODETARJE = 300.00;
int opcion, v, c;

void compraMedic(float vIva, float subTotal);
//Implementacion de Subprograma
    void compraMedic(float vIva, float subTotal){//Pasando parámetros por valor
        //Definir variables de forma local en el modulo
    char numTarjeta[18];
    const float IVA = 0.12;
    const float SALDODETARJE = 300.00;
    int v, c;

    cout << "I===================================================================================================I"<< endl;
    cout << "I                          COMPRA DE MEDICINAS                                                      I"<< endl;
    cout << "I                          DISPONIBLES                                                              I"<< endl;
    cout << "I                                                                                                   I"<< endl;
    cout << "ITracto alimentario: intoxicaciones alimentarias, parasitosis, úlcera, gastritis, vitaminas. I 70$  I"<< endl;
    cout << "IMetabolismo: diabetes, reductores de colesterol y triglicéridos.                            I 50$  I"<< endl;
    cout << "ISangre y órganos formadores de sangre: antihemorrágicos                                     I 60$  I"<< endl;
    cout << "IRespiratorias: neumonía, asma.                                                              I 80$  I"<< endl;
    cout << "I===================================================================================================I"<< endl;
    cout << " "<< endl;
    cout << "Ingrese el valor de la medicina, segun su sintoma "<< endl;
    cin >> v;
    while(!(v==50||v==60||v==70||v==80)||(v<0)){
     cout << "Valor mal ingresado, por favor intente de nuevo" << endl;
     cin >>v;
     }
     cout << " "<< endl;
     cout << "Ingrese la cantidad de medicinas que comprara y recuerde que solo podra hacer su compra con menos de 10 medicinas "<< endl;
     cin >>c;
     while(c<0 || c>=10){
     cout << "Cantidad mal ingresada, por favor intente de nuevo" << endl;
     cin >>c;
     }
     cout << " "<< endl;
     cout << "Ingrese numero de tarjeta de credito o debito "<< endl;
     cin >> numTarjeta;

     subTotal=v*c;
     vIva=subTotal*IVA;
     //Llamada de la funcion
    if(recibo(vIva,subTotal)<=SALDODETARJE){
    cout << "I=================================================================I"<< endl;
    cout << "I                SU COMPRA A SIDO REALIZADA CON EXITO             I"<< endl;
    cout << "I                                                                 I"<< endl;
    cout << "I  Su factura es:     Cantidad de medicina    "<< c <<"           I"<< endl;
    cout << "I                     Valor de la medicina    "<< v <<"$          I"<< endl;
    cout << "I                     Subtotal                "<< subTotal <<"$   I"<< endl;
    cout << "I                     IVA                     "<< IVA <<"%        I"<< endl;
    cout << "I=================================================================I"<< endl;
    cout << "I                     TOTAL   "<< recibo(vIva,subTotal) <<"$      I"<< endl;
    cout << "I=================================================================I"<< endl;
    }else{
    cout << "I=====================================================================I"<< endl;
    cout << "Su tarjeta no cuenta con el saldo suficiente para realizar esta compra" << endl;
    cout << "I=====================================================================I"<< endl;
    }
    }

    //Implementacion de Funcion
    float recibo (float vIva, float subTotal){
    return (subTotal+vIva);
    }

void productOrden(){
int tamano;
cout << "------------------------------------------"<<endl;
cout << " ORDENAMIENTO BURBUJA-BUSQUEDA SECUENCIAL "<<endl;
cout << "------------------------------------------"<<endl;
int i,j;
string aux;
cout << "cuantos productos desea para el laboratorio clinico"<< endl;
cin>>tamano;
while(tamano<=0||tamano>=10){
    cout<<"esta seguro, no se acepta numeros negativos"<<endl;
    cin>>tamano;
}
cout << "a continuacion ingresare los productos que mas le conviene a la medicina"<< endl;
for (i=0;i<tamano;i++){
    fflush(stdin);
    getline(cin,productos[i]);

}
for(i=0;i<tamano;i++){
    for(j=0;j<tamano;j++){
    if((productos[j])>(productos[j+1])){
        aux=productos[j];
        productos[j]=productos[j+1];
        productos[j+1]=aux;
        }
    }
}
cout <<"PRODUCTOS ORDENADOS"<<endl;
cout<<""<<endl;
for (i=1;i<=tamano;i++){
    cout<<productos[i]<<endl;
    }
    busquedaSecuencial();


}

void busquedaSecuencial(){
string productoB;
int a;
 a=0;
string dato;
char band = 'F';
cout << "---------------------------------------------"<<endl;
cout << " BUSQUEDA SECUENCIAL PRODUCTO "<<endl;
cout << "---------------------------------------------"<<endl;
cout << "de los productos mencionados cual le interesa"<< endl;
cin >>dato;
while((band == 'F')&&(a<8)){
    if(productos[a] == dato){
        band = 'V';
        }
    a++;
}
if(band == 'F'){
    cout << "no, tengo ese producto, quisiera elegir otro?"<<endl;
    cout<<"desea buscar/elegir otro producto? (s/n)"<<endl;
        cin>>productoB;
        while(productoB!="s"&&productoB!="n"){
            cout<<"solo puede ingresar (s) o (n), vuelva a intentarlo"<<endl;
            cin>>productoB;
        }
        if(productoB=="s"){
   busquedaSecuencial();
        }if(productoB=="n"){
            cout<<" que tenga un buen dia"<<endl;
        }
}else{
    if(band == 'V'){
        cout << "el produncto  se encontro: "<<a-1<<endl;
    }
}
}

void registroEnfermedades(){

cout<<"cuantas enfermedades quiere conocer"<<endl;
cin>>enferC;
while(enferC<=0||enferC>=10){
    cout<<"ese numero no es aceptable"<<endl;
    cin>>enferC;
}
for(int i=0; i<enferC; i++){
    cout<<"a continuacion ingresaremos las enfermedades "<<i<<endl;
    cin>>nombreEfermedad[i];
    }

cout<<"ENFERMEDADES"<<endl;
for(int i=0; i<enferC; i++){
    cout<<nombreEfermedad[i]<<endl;
    }
}


void insercionNombrEnfermedad(){
int i,pos;
cout <<"-------------------------------"<<endl;
 cout <<"ORDEN DE INSERCION ASCENDENTE "<<endl;
 cout <<"-------------------------------"<<endl;
   for(i=0;i<enferC;i++){
  pos=i;
  aux=nombreEfermedad[i];
  while((pos>0)&&(nombreEfermedad[pos-1]>aux)){
  nombreEfermedad[pos]=nombreEfermedad[pos-1];
  pos--;
  }
    nombreEfermedad[pos]=aux;
}
cout <<""<<endl;
 cout<<"--------------------------------"<<endl;
 cout<<"ENFERMEDADES MENOR A MAYOR<"<<endl;
 cout<<"--------------------------------"<<endl;
for(i=0;i<enferC;i++){
   cout<<nombreEfermedad[i]<<endl;
    }
}
//Implementacion de Subprograma
void recursividad(){
int nro;
    cout << "==========================================================" << endl;
    cout << "          RECURSIVIDAD Y PASANDO PARAMETROS POR VALOR"      << endl;
    cout << "==========================================================" << endl;
    cout<<endl;
    cout << "Convertir a binario un numero decimal"<< endl;
    do{
    cout << "INGRESE NUMERO:"<< endl;
    cin>>nro;
    if(nro<0) cout << " INGRESE UN NUMERO ENTERO Y POSITIVO…"<< endl;
    }while(nro<0);
    cout<<endl;
    binario(nro);
    cout << "Numero:"<<nro<< endl;
    cout << "Binario:"<<binario(nro)<< endl;
    }

//Implementacion de Funcion
int binario(int nro){//Pasando parámetros por valor
if(nro>1)      binario(nro/2);
cout<<nro%2;
}

//Implementacion de Funcion
int funcion(int &n, int &m) {//Pasando parámetros por referencia
   n = n + 2;
   m = m - 5;
   return n+m;
}

void insercion(){
    int i,pos,tamano,aux;
cout<<"\n\t--------------------------------------------------"<<endl;
        cout<<"CUANTAS MEDICINAS DESEA RESERVAR: "<<endl;
       cin>>tamano;
int aInsercion[tamano];
    for(int i=0;i<tamano;i++){
    cout<<"INGRESE EL PRECIO DE CADA UNA: "<<endl;
    cin>>aInsercion[i];
}
for (i=0;i<tamano;i++){
            pos=i;
            aux=aInsercion[i];
            while ((pos>0)&&(aInsercion[pos-1]>aux)){
               aInsercion[pos]=aInsercion[pos-1];
            pos--;
            }
            aInsercion[pos]=aux;
            }
    cout<<"\n\t--------------------------------------------------"<<endl;
              for(i=0;i<tamano;i++){
           cout<<aInsercion[i]<<" ";
            }
    cout<<""<<endl;

    cout<<"  AQUI TE MOSTRAMOS EL PRECIO DE LAS MEDICINAS EN ORDEN DESENDENTE: "<<endl;
   cout<<"\n\t--------------------------------------------------"<<endl;
              for(i=tamano;i>=0;i--){
           cout<<aInsercion[i]<<" ";
            }
}
void secuencial(){
    int i,dato,tamano;
    char band= 'f';
     i=0;
      cout<<"\n\t--------------------------------------------------"<<endl;
      cout<<"  INGRESA EL NUMERO DE MEDICINAS QUE RESERVASTE: "<<endl;
    cin>>tamano;
    int aSecuencial[tamano];
    for(int j=0;j<tamano;j++){
        cout<<"INGRESA EL NUMERO DE MEDICINAS : "<<j<<" ";
        cin>>aSecuencial[j];
    }
     for(int j=0;j<tamano;j++){
      cout<<"\n\t--------------------------------------------------"<<endl;
         cout<<"LOS NUMEROS DE MEDICINAS INGRESADOS SON: "<<" "<<aSecuencial[j]<<endl;
    }
     cout<<"\n\t--------------------------------------------------"<<endl;
      cout<<"                QUE NUMERO DE MEDICINA DESEA BUSCAR: "<<endl;
    cout<<"\n\t--------------------------------------------------"<<endl;
      cin>>dato;
    while((band=='f')&&(i<tamano)){
      if(aSecuencial[i]==dato){
        band='v';
      }
      i++;
    }
  if(band=='f'){
    cout<<"EL NUMERO DE MEDICINA NO EXISTE "<<endl;
  }
  else
  if (band=='v'){
    cout<<"EL NUMERO DE MEDICINA  FUE ENCONTRADO EN: "<<i-1<<endl;
  }
}



#endif // LIBRERIAMEDICINA_H_INCLUDED
