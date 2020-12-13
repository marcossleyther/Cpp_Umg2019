#include <iostream>
#include<stdlib.h>
#include<conio.h>
#include<fstream>
#include<string>
using namespace std;

void recibirdatos();
string fac [5][5];
int cantidad=0,precio=0,total=0,totalfac=0;
int main()
{

recibirdatos();
system("cls");
recibirdatos();
    return 0;
}




void recibirdatos() {
 ofstream archivo;
 string nit,nombre;
 int op =0;
 string fac[5][5];
 cout<<"PROGRAMA DE FACTURACION "<<endl;
 cout<<"1.Crear una Factura "<<endl;
 cout<<"2.Leer Factura "<<endl;
 cin>>op;
 switch(op) {
 case 1:
system("cls");
 archivo.open("factura.txt",ios::app);

 if (archivo.fail()){
    cout<<"No se abrio";
 }
   cout<<"INGRESE LOS DATOS DE LA FACTURA "<<endl;
   archivo<<"INGRESE LOS DATOS DE LA FACTURA "<<endl;
   for(int i=0;i<4;i++) {
     archivo<<"==================================================================================================="<<endl;
     cout<<"==================================================================================================="<<endl;
     cout<<"CANTIDAD: ";cin>>fac[i][0];cout<<"PRODUCTO: ";cin>>fac[i][1];cout<<"DESCRIPCION: ";cin>>fac[i][2];cout<<"PRECIO U: ";cin>>fac[i][3];cout<<""<<endl;
     archivo<<"\nCANTIDAD: ";
     archivo<<fac[i][0];
     archivo<<"\nPRODUCTO: ";
     archivo<<fac[i][1];
     archivo<<"\nDESCRIPCION: ";
     archivo<<fac[i][2];
     archivo<<"\nPRECIO U: ";
     archivo<<fac[i][3];
     cantidad= stoi(fac[i][0]);
     precio= stoi(fac[i][3]);
     total= cantidad * precio;
     cout<<"\nTotal del producto: "<<total<<endl;
     archivo<<"\nTotal del producto  : "<<total<<endl;
     totalfac+=total;
    }
cout<<"=============================================="<<endl;
archivo<<"==================================================================================================="<<endl;
cout<<"El total de su factura es:  "<<totalfac<<endl;
archivo<<"El total de su factura es: "<<totalfac<<endl;

cout<<"=============================================="<<endl;
archivo<<"\n\n\n\nCAJERO: Marlon Adrian Gonzalez Garzona"<<endl;
archivo<<"Empleado No.:6990-19-12170"<<endl;
archivo.close();
break;

 case 2:
     system("cls");
ifstream archivo;
string leer;
archivo.open("factura.txt", ios::in);

if(archivo.fail()){

    cout<<"No se abrio el archivo";
    exit(1);
}
while(!archivo.eof()) {

    getline(archivo,leer);
    cout<<leer<<endl;
}

archivo.close();
    break;
}

}
