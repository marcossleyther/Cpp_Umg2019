#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
int f,c;
int mat1[50][50], mat2[100][100],               SuMa[100][100];
    cout<<"Cuantas Filas desea: "; cin>>f;
    cout<<"Cuantas Columnas desea: "; cin>>c;
    cout<<"Ingrese los valores de la primer matriz: \n";
    for(int i=0; i<f; i++){
        for(int j=0; j<c; j++){
                cout<<"["<<i<<"]"<<"["<<j<<"]";
        cin>>mat1[i][j];
    }}
    cout<<"Ingrese los valores de la segunda matriz: \n";
    for(int i=0; i<f; i++){
        for(int j=0; j<c; j++){
                cout<<"["<<i<<"]"<<"["<<j<<"]";
        cin>>mat2[i][j];
    }}

    for(int i=0; i<f; i++){
        for(int j=0; j<c; j++){
        SuMa[i][j] = 0;
        }}
    cout<<"LA Multiplicacion es: \n";
    for(int i=0; i<f; i++){
        for(int j=0; j<c; j++){
                    for(int k=0; k<c; k++){
                    SuMa[i][j]= SuMa[i][j]+mat1[i][k]*mat2[k][j]; }

        cout<<"|"<<SuMa[i][j]<<"|";
        }cout<<endl;}


    return 0;
    }
