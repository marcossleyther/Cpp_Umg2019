#include<iostream>
#include<stdlib.h>

using namespace std;
int main()
{
int a,b;
char res;
    do{
            system("cls");
        do{

    cout<<"\n\n\n\n          Ingrese el numero de tabla de multiplicar que desea ver\n\n\n          Maximo tabla del 15: ";
    cout<<"\n          Ingrese el numero seguido de Enter, Ejemplo: '15+Enter':  "; cin>>a;
    cout<<"          Hasta que numero desea multiplicar: ";cin>>b; cout<<endl;
        }
        while((a<1)||(a>15));

            for(int i=0; i<=b; i++)
                {

            cout<<a<<" * "<<i<<" = "<<a*i<<endl;
                }
    cout<<"Desea ejecutar de nuevo: S/N ";
    cin>>res;
        }
    while((res == ('S'))||(res==('s')));

return 0;
}
