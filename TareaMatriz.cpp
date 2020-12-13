#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;
void leer();
void asignar();
void mostrar();
void matOrden();

int mat1[3][3], mat2[3][3], mat3[6][3],par=0,par1=0,aux;

int main(){
    cout<<"Marcos Sleyther Castellanos Lemus\n";
    cout<<"Carne: 6990-19-9299\n";
    leer();
    asignar();
    mostrar();
    matOrden();
    system("pause");
return 0;
    }


//**************************************************************
    void leer(){
    cout<<"\nIngrese los valores de la primer matriz: \n"; //Ingresando los valores a matriz #1
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
                cout<<"["<<i<<"]"<<"["<<j<<"]";
                cin>>mat1[i][j];
    }}
        cout<<"Ingrese los valores de la segunda matriz: \n"; //Ingresando los valores a matriz #2
        for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
                cout<<"["<<i<<"]"<<"["<<j<<"]";
                cin>>mat2[i][j];
    }}
}


//*************************************************************
    void asignar(){
    for(int i=0; i<3; i++){             //Asignando matriz 1
        for(int j=0; j<3; j++){
                mat3[i][j]=mat1[i][j];
    }}

    for(int i=3; i<6; i++){             //Asignando matriz 2
        for(int j=0; j<3; j++){
                mat3[i][j]=mat2[i-3][j];
    }}
    }


//**************************************************************
    void mostrar(){
        system("cls");
        cout<<"\nLa Matriz 1 es: \n"; //mostrando matriz 1
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){

        cout<<"|"<<mat1[i][j]<<"|";
            }cout<<endl;
            }
        cout<<"\nLa Matriz 2 es: \n"; //mostrando matriz 2
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){

        cout<<"|"<<mat2[i][j]<<"|";
            }cout<<endl;
            }
    cout<<"\nLa union de Matriz 1 y Matriz 2 es: \n"; //mostrando matriz 3
    for(int i=0; i<6; i++){
        for(int j=0; j<3; j++){

        cout<<"|"<<mat3[i][j]<<"|";
            }cout<<endl;
            }
cout<<"\nLos numeros pares de la matriz son: \n";
            for(int i=0; i<6; i++){         //Saber si es numero par
        for(int j=0; j<3; j++){
        if(mat3[i][j]%2==0)
        {
            par++;
            cout<<"|"<<mat3[i][j]<<"|";
        }
            }
            }
            cout<<"\n\nSiendo un total de: "<<par<<endl<<endl;
    system("pause");
    }
//***************************************************************
void matOrden(){
system("cls");                 //Ordenando matriz por Filas descententes
    for(int i=0; i<6; i++){
            for(int x=0; x<6; x++){
                for(int y=x+1; y<3; y++)
                {
                   if(mat3[i][x]<mat3[i][y]){
                    aux=mat3[i][x];
                    mat3[i][x]=mat3[i][y];
                    mat3[i][y]=aux;
                                            }
                }
                                    }
                             }
cout<<"La matriz ordenada por Filas es: "<<endl;
        for(int i=0; i<6; i++){         //Mostrando matriz ordenada por filas
        for(int j=0; j<3; j++){
            cout<<"|"<<mat3[i][j]<<"|";
        }cout<<endl;}

        cout<<"\nLos numeros pares de la matriz son: \n";
            for(int i=0; i<6; i++){         //Saber si es numero par
        for(int j=0; j<3; j++){
        if(mat3[i][j]%2==0)
        {
            par1++;
            cout<<"|"<<mat3[i][j]<<"|";
        }}}
            cout<<"\n\nSiendo un total de: "<<par1<<endl<<endl;
    }

