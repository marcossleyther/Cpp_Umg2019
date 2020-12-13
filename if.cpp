#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    float num;
    char res;
    do{
            system("cls");
            cout<<"Nombre: Marcos Sleyther Castellanos Lemus";
            cout<<"\nCarne:  6990-19-9299\n\n";
    do{
    cout<<"Ingrese su edad en numeros: "; cin>>num;
    if(num<=25 && num>=0)
    {
        cout<<"\nSu edad esta comprendida en un rango menor";
    }
        else if(num<=50 && num>25)
        {
            cout<<"\nSu edad esta comprendida en un rango medio";
        }
            else if(num<=75 && num>50)
            {
            cout<<"\nSu edad esta comprendida en un medio alto";
            }
                else if(num<=100 && num>75)
                {
            cout<<"\nSu edad esta comprendida en un rango alto";
                }
                else { cout<<"\n¡¡¡Fuera de rango!!!\n\n"; }
        }
        while(num>100);
    cout<<"\n\nPara ejecutar de nuevo presione la letra 'S' : "; cin>>res;
    }
    while( res=='s' || res=='S');
return 0;
}
