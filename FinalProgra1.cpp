//Librerias **********************************************************
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<string>
using namespace std;
//Estructuras *********************************************************
struct Nodo{
	string dato;
	Nodo *siguiente;
};

struct Nodos{
	int datos;
	Nodos *siguientes;
};

struct NodoArbol{
    int dato;
    NodoArbol *derecho;
    NodoArbol *izquierdo;
} *Arbol=NULL;

//Prototipos de Funcion *************************************************
bool colaVacia(Nodos*);
void menu();
void insertarP(Nodo *&,string);
void insertarPila(Nodos *&,int);
void MostrarP(Nodo *&,string &);
void MostrarPila(Nodos *&,int &);
void insertarC1(Nodos *&, Nodos *&, int);
void MostrarC1(Nodos *&, Nodos *&, int&);
void MostrarArbol(NodoArbol *, int);
NodoArbol *CrearArbol(int);
void insertarArbol(NodoArbol *&, int);

//Funcion Pincipal *******************************************************
int main(){
    cout<<"\tMarcos Sleyther Castellanos Lemus\n\t6990-19-9299\n"<<endl;
	menu();
	getch();
	return 0;
}

//Funcion de Menu ********************************************************
void menu(){
	Nodo *pila = NULL;
	Nodos *Pila = NULL;
	Nodos *frente = NULL;
	Nodos *fin = NULL;

	int opcion, contador1=0, contador=0,datos;
	char SiNO;
	string dato;

	do{
        cout<<"\n\t.:Menu de Opciones:.\n"<<endl;
		cout<<"\t1. Para ingresar nombres"<<endl;
		cout<<"\t2. Para mostrar Pila, Cola y misma Cola Invertida"<<endl;
		cout<<"\t3. Mostrar el Arbol de Cola Invertida"<<endl;
		cout<<"\t4. Salir"<<endl;
		cout<<"\tOpcion: ---> ";
		cin>>opcion;
		switch(opcion){
			case 1: do{
			    cout<<"\nDigite el Nombre: ";
					getline(cin>>ws, dato);
                    insertarP(pila,dato);
                    cout<<"Desea ingresar otro nombre S/N: "; cin>>SiNO;
                    } while(SiNO== 's' || SiNO=='S');
					break;

			case 2: cout<<"\t\nMostrando elementos de la pila: "<<endl;
					while(pila != NULL){
						 MostrarP(pila,dato);
						 if(pila != NULL){
                         contador = dato.length(); //Para contar los char del string
                         cout<<"\t"<<dato<<" --- \tTiene "<<contador<<" caracteres ---"<<endl;
                                        }
                        else{
                            contador = dato.length();
                            cout<<"\t"<<dato<<" --- Tiene "<<contador<<" caracteres ---"<<endl;
                            } insertarC1(frente,fin,contador); //Llamado de funcion para llenar COLA1
                                        }
					cout<<"\t\nMostrando elementos de la COLA 1: "<<endl;
					while(frente != NULL){
                        MostrarC1(frente,fin,contador);
                        if(frente != NULL){
                            contador1 = contador;
                            cout<<contador<<" / "; }
                        else {
                            contador1 = contador;
                            cout<<contador<<" --- \n\n"; }
                            insertarPila(Pila,contador1); }
        //***************INICIO Para mostrar COLA INVERTIDA(se convierte a pila, luego a cola)*************************************
                        while(Pila != NULL){
                             MostrarPila(Pila,contador1);
                             if(Pila != NULL){
                                    contador = contador1;              }
                            else{
                                    contador = contador1;
                                } insertarC1(frente,fin,contador); //Llamado de funcion para llenar COLA2
                                            }
                            cout<<"\t\nMostrando elementos de la COLA invertida: "<<endl;
                            while(frente != NULL){
                                MostrarC1(frente,fin,contador);
                                if(frente != NULL){
                                    contador1 = contador;
                                    cout<<contador<<" / ";
                                                    }
                                else {
                                    contador1 = contador;
                                    cout<<contador<<" --- \n\n";
                                    } insertarArbol(Arbol, contador1); }
                                system("pause");
                                break;
        //***************FIN Para mostrar COLA INVERTIDA(se convierte a pila, luego a cola)*************************************
			case 3:
			cout<<"\tSe muestran los elementos del Arbol\n"<<endl;
                MostrarArbol(Arbol, contador1);
                system("pause");
                break;
			case 4: break;
		}
		system("cls");
	}while(opcion != 4); }

 //Funcion para agregar elementos a la pila **************************************
void insertarP(Nodo *&pila,string n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo; }

//Funcion para mostrar los elementos de la pila ***********************************
void MostrarP(Nodo *&pila,string &n){
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux; }

//Funcion para agregar elementos a la cola1 *****************************************
void insertarC1(Nodos *&frente, Nodos *&fin, int n) {
Nodos *nuevoNodo = new Nodos();
nuevoNodo->datos = n;
nuevoNodo->siguientes = NULL;
    if(colaVacia(frente)) {
        frente = nuevoNodo; }
    else {
        fin->siguientes = nuevoNodo; }
        fin = nuevoNodo; }

//Funcion para validar si la cola esta vacia*****************************************
bool colaVacia(Nodos *frente){
    return (frente == NULL)? true:false; }

//Funcion para mostrar los elementos de la COLA 1 ***********************************
void MostrarC1(Nodos *&frente, Nodos*&fin, int &n){
    n = frente->datos;
    Nodos *aux = frente;
    if(frente == fin ) {
        frente = NULL;
        fin = NULL; }
    else{ frente = frente->siguientes; }
    delete aux; }

 //Funcion para agregar elementos a la pila 2 **************************************
void insertarPila(Nodos *&pila,int n){
	Nodos *nuevo_nodo = new Nodos();
	nuevo_nodo->datos = n;
	nuevo_nodo->siguientes = pila;
	pila = nuevo_nodo;}

//Funcion para mostrar los elementos de la pila 2 ***********************************
void MostrarPila(Nodos *&pila,int &n){
	Nodos *aux = pila;
	n = aux->datos;
	pila = aux->siguientes;
	delete aux; }

//Funcion para crear nuevo Nodo del Arbol *******************************************
NodoArbol *CrearArbol(int n){
NodoArbol *nuevoNodo = new NodoArbol();
    nuevoNodo->dato = n;
    nuevoNodo->derecho = NULL;
    nuevoNodo->izquierdo = NULL;
    return nuevoNodo; }

//Funcion para insertar un nodo ***************************************************
void insertarArbol(NodoArbol *&Arbol, int n){
    if(Arbol == NULL)
        { NodoArbol *nuevoNodo = CrearArbol(n); Arbol = nuevoNodo; }
    else {
        int ValorRaiz = Arbol->dato;
            if(n < ValorRaiz){
                insertarArbol( Arbol->izquierdo,n); }
          else { insertarArbol( Arbol->derecho, n); } } }

//Funcion para mostrar el arbol *****************************************************
void MostrarArbol(NodoArbol *Arbol, int contador) {
    if(Arbol == NULL) { return; }
    else {
        MostrarArbol(Arbol->derecho, contador+1);
        for(int i=0; i<contador; i++)
        { cout<<"..  "; }
        cout<<Arbol->dato<<endl;
        MostrarArbol(Arbol->izquierdo, contador+1); } }
