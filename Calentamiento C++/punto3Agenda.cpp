#include <iostream>
#include <fstream>

using namespace std;

typedef struct contacto contacto;

struct contacto{
    char nombre[100];
    char apellido[100];
    long long int numero;
}listaContactos[100];

void menu(){
    cout << "Seleccione la opcion que decea realizar: \n\n";
    cout << "1. Crear archivo de texto \n";
    cout << "2. Agregar contacto\n";
    cout << "3. Visualizar contactos \n";
    cout << "0. exit\n";
    cout << "opc = ";
}

void crearTxt( int cantContactos ){
    int i;
    ofstream file;
    file.open("Contactos.txt");
    file << "Nombre-apellido-numero\n";
    for(i = 0; i<cantContactos; i++){
        cout << "jeje";
        file<< listaContactos[i].nombre<< " " << listaContactos[i].apellido<<" "<< listaContactos[i].numero<<"\n";
    }
    file.close();
}

void agregarContacto( int cantContactos){
    cout <<"Ingrese el NOMBRE de su nuevo contacto: ";
    cin.ignore(256, '\n');
    cin.getline(listaContactos[cantContactos].nombre, 100);
    cout << "Ingrese el NUMERO de su nuevo contacto: ";
    cin >> listaContactos[cantContactos].numero;
    cout << listaContactos[cantContactos].numero<<endl;
    cout << "Ingrese el APELLIDO de su nuevo contacto: ";
    cin.ignore(256, '\n');
    cin.getline(listaContactos[cantContactos].apellido, 100);
    
}

void visualizar( int cantContactos){
    int i;
    cout << endl;
    for(i = 0; i < cantContactos; i++ ){
        cout << i+1 << ".";
        cout << listaContactos[i].nombre;
        cout << " "<< listaContactos[ i ].apellido;
        cout << " " << listaContactos[ i ].numero;
        cout << "\n";
    }
    cout << endl;
}

int main(){
    int cantContactos, opc;
    cout << "Bienvenidos a tu agenda personal :D\n";
    cout << "Recuerda que tu numero maximo de contactos es 100, el presupuesto no alcanzo para mas :(\n";
    do{    
        menu();
        cin >> opc;
        switch(opc){
            case 1:
            crearTxt(cantContactos);
                break;
            case 2:
                agregarContacto( cantContactos );
                cantContactos++;
                break;
            case 3:
                visualizar( cantContactos );
                break;
            case 0:
                cout << "Hasta luego :D";
        } 
    }while(opc != 0);
    return 0;
}