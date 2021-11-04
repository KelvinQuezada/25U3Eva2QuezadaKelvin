#ifndef ESTRUCTURAFUNCIONKPQB_H_INCLUDED
#define ESTRUCTURAFUNCIONKPQB_H_INCLUDED
using namespace std;

void artefactosEmpresa();
void lecturaArchivo();
void datoArchivo();
void datoArchivo2();
void lecturaArchivo2();

struct informacionEmpleados{ //estructura simple
    string nombre;
    string apellido;
    char area[40];
    int numEmpl;
}empleados;



struct artefacto{ //simple
    char direccion[30];
    char color[20];
    char marca[20];

};

struct empleado{ //anidada
    char nombreCliente[20];
    char area[20];
    char nombre[20];
    struct artefacto   infEmpleado;
    double salario;
}empleados2[2];


void artefactosEmpresa(){
    int numero,i;
    cout<<"=========================================="<<endl;
    cout<<"         ingrese los artefactos"<<endl;
    cout<<"=========================================="<<endl;
    cout<<"Ingrese cuantas atefactos va a registrar "<<endl;
    cin>>numero;
    while (numero<=0) {
    cout << "No se pueden ingresar numeros negativos" << endl;
    cout << "Por favor intente de nuevo" << endl;
    cin >> numero;
	}

    for (int i=0;i<numero;i++){
    cout<<"=========================================="<<endl;
    cout<<"Digite el nombre y apellido: ";
    fflush(stdin);
    cin.getline(empleados2[i].nombreCliente,20,'\n');
    cout<<"Digite el Area: ";
    cin.getline(empleados2[i].area,20,'\n');
    cout<<"Digite la direccion: ";
    cin.getline(empleados2[i].infEmpleado.direccion,30,'\n');
    cout<<"Digite el nombre del artefacto: ";
    cin.getline(empleados2[i].nombre,20,'\n');
     cout<<"Marca: ";
    cin.getline(empleados2[i].infEmpleado.marca,20,'\n');
    cout<<"Color: ";
    cin.getline(empleados2[i].infEmpleado.color,20,'\n');
    cout<<"Precio: ";
    cin>>empleados2[i].salario;
    while (empleados2[i].salario<=0) {
    cout << "No se pueden ingresar numeros negativos" << endl;
    cout << "Por favor intente de nuevo" << endl;
    cin >>empleados2[i].salario;
    cout<<"=========================================="<<endl;
	}


    }
    cout<<"\n";
    datoArchivo2();

}

void datoArchivo2(){
    int i;
	ofstream datos2; //ficehros de salida
	datos2<<"------------------------------------------------------------------"<<endl;
	datos2.open("RegistroCompra.txt", ios::out | ios::binary);
    datos2<<"SU REGISTRO SON  "<<endl;
    datos2<<" NOMBRE Y APELLIDO: "<<empleados2[i].nombreCliente<<endl;
    datos2<<" AREA: "<<empleados2[i].area<<endl;
    datos2<<" DIRECCION: "<<empleados2[i].infEmpleado.direccion<<endl;
    datos2<<" ARTEFACTO: "<<empleados2[i].nombre<<endl;
    datos2<<" MARCA: "<<empleados2[i].infEmpleado.marca<<endl;
    datos2<<" COLOR: "<<empleados2[i].infEmpleado.color<<endl;
    datos2<<" PRECIO: "<<empleados2[i].salario<<endl;
    datos2<<"------------------------------------------------------------------"<<endl;
    lecturaArchivo2();

}

void lecturaArchivo2(){
	cout<<"|| LECTURA DE ARCHIVO ||"<<endl<<endl;
	ifstream lectura;
	string textoLectura;
	lectura.open("Registro.txt", ios::in | ios::binary);
	while (!lectura.eof()){//determina el fin de un archivo
		getline(lectura,textoLectura);
		cout<<textoLectura<<endl;
	}
	lectura.close(); //abrir y cerrar ficheros
	cout<<endl<<endl;
	system("pause");//genera pausa en el programa
}





 void datosEmpleados(){
    cout<<"\n\t---  Registro de empleados  --- "<<endl;
    cout<<"======================================"<<endl;
    cout << "Ingrese el nombre: ";
    cin>>empleados.nombre;
    cout<<"Ingrese el apellido: ";
    cin>>empleados.apellido;
    cout<<"Ingrese su area    : ";
    cin.ignore();
    cin.getline(empleados.area,20,'\n');
    cout<<"Ingrese su codigo  : ";
    cin>>empleados.numEmpl;
    datoArchivo2();

 }








void datoArchivo(){
	ofstream datos; //ficehros de salida
	datos<<"------------------------------------------------------------------"<<endl;
	datos.open("Registro.txt", ios::out | ios::binary);
    datos<<"SU REGISTRO SON  "<<endl;
    datos<<" NOMBRE: "<<empleados.nombre<<endl;
    datos<<" APELLIDO: "<<empleados.apellido<<endl;
    datos<<" AREA: "<<empleados.area<<endl;
    datos<<" CODIGO: "<<empleados.numEmpl<<endl;
    datos<<"------------------------------------------------------------------"<<endl;
    lecturaArchivo();
}


void lecturaArchivo(){
	cout<<"|| LECTURA DE ARCHIVO ||"<<endl<<endl;
	ifstream lectura;
	string textoLectura;
	lectura.open("Registro.txt", ios::in | ios::binary);
	while (!lectura.eof()){//determina el fin de un archivo
		getline(lectura,textoLectura);
		cout<<textoLectura<<endl;
	}
	lectura.close(); //abrir y cerrar ficheros
	cout<<endl<<endl;
	system("pause");//genera pausa en el programa
}


#endif // ESTRUCTURAFUNCIONKPQB_H_INCLUDED
