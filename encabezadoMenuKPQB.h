#ifndef ENCABEZADOMENUKPQB_H_INCLUDED
#define ENCABEZADOMENUKPQB_H_INCLUDED
using namespace std;
void menuPrincipalKQ();
void datosEmpleados();
void menuPrincipalKQ();
void artefactosEmpresa();
void encabezado();

void encabezado(){
	string texto;
    ifstream variable;
    variable.open("encabezado.txt",ios::in);
        if(variable.fail()){
            cout<<"================================================="<<endl;
            cout<<"      EL ARCHIVO NO EXISTE, NO SE PUEDE LEER"<<endl;
            cout<<"================================================="<<endl;
        }
        else{
            while(!variable.eof())
            {
                getline(variable, texto);
                cout<<texto<<endl;

            }
        variable.close();
    }
}




void menuPrincipalKQ(){
    int opcionMenu;
    do{
    cout<<"=================================================="<<endl;
    cout<<"             UNIDAD 3 EVALUACION 1 TDA + ARCHIVOS    "<<endl;
    cout<<"=================================================="<<endl;
    cout<<"=================================================="<<endl;
    cout<<"             MENU PRINCIPAL TDA + ARCHIVOS     "<<endl;
    cout<<"=================================================="<<endl;
    cout<<"1. Crear e Imprimir Archivo con Struct Simple con DATOS INGRESADOS "<<endl;
    cout<<"2. Crear e Imprimir Archivo con Struct Simple/Compuesta con DATOS"<<endl;
    cout<<"3. Salir "<<endl;
    cout<<"=================================================="<<endl;
    cout<<" Escoja una de las 3 opciones "<<endl;
    cout<<"=================================================="<<endl;
    cin >> opcionMenu;
    switch(opcionMenu){
        case 1:
            datosEmpleados();

            break;
        case 2:
            artefactosEmpresa();

            break;
        case 3:
            cout << "GRACIAS POR VENIR VUELVA PRONTO" << endl;
            exit(0);
            break;
        default:
            cout <<"========================================" <<endl;
            cout <<"OPCION INCORRECTA, INGRESE NUEVAMENTE" <<endl;
        }
    }
    while (!((opcionMenu<0 && opcionMenu>=3)));
}

#endif // ENCABEZADOMENUKPQB_H_INCLUDED
