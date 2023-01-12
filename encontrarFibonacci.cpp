/*
VerificarFibonacci.cpp
Materia - Estructuras de Datos y Algoritmos II
Asunto: 
Verificar que un numero pertenece a la serie de fibonacci
Autor:  Pazzis Paulino 1103790
        Huan Hao Wu 1104326
        Johan Contreras 1106473
        Luis Adames 1106170
        Paola Saldana 1104081
        
Fecha: 15 - Diciembre - 2022
*/

#include <iostream>
#include <math.h>

using namespace std;

int anterior = 0;
int actual = 1;
int auxiliar = 1;

int PosicionFibonacci(int anterior, int actual, int n){

    if(n == 0){
        return anterior;
    }
    else{
    
        auxiliar = anterior + actual;
        anterior = actual;
        actual = auxiliar;
        n = n-1;
        PosicionFibonacci(anterior, actual, n);
    }
}


int VerificarFibonacci(int anterior, int actual, int n){
  
    if(n >= actual){

        if(n == actual){
            
            cout << "El numero " << n << " pertenece a la serie fibonacci" << endl << endl;
        }
        else{
            auxiliar = anterior + actual;
            anterior = actual;
            actual = auxiliar;
            VerificarFibonacci(anterior, actual, n);                     
        }
    }
    else{
        cout << "El numero " << n << " no pertenece a la serie fibonacci" << endl << endl;
        
    }

    return actual;
}
int main() {

    string continuar = "";
    int n = 0;
    char opcion; 
    do{
		system("cls");
	    cout<<"|-----------------------------|" << endl;
		cout<<"|            MENU             |" << endl;
		cout<<"|-----------------------------|" << endl;
		cout<<"|     1) Numero por posicion  |" << endl;
		cout<<"|     2) Verificar fibonacci  |" << endl;
		cout<<"|-----------------------------|" <<endl;
		cout<<"\nElija una opci�n: ";
		cin >> opcion; 
		system("cls");
		switch (opcion) //Se toma el caracter de la primera posicion
		{
			case '1':{
                do{
				cout <<"Introduzca la posicion del numero a buscar: " << endl;
                cin >> n;

                cout <<"El numero en la posicion " << n << "es el " << PosicionFibonacci(anterior, actual, n) <<  endl;
               

                cout<<"Desea continuar? (S/N): ";
		        cin>>continuar;
		        cout<<endl<<endl<<endl;
                }
                while(continuar=="S" || continuar=="s");
                system("pause");
                break;
			}
			case '2':{
                do{
				cout << "Introduzca el numero a verificar en la serie fibonacci: " << endl;
                cin >> n;
                VerificarFibonacci(anterior, actual, n);

                cout<<"Desea continuar? (S/N): ";
		        cin>>continuar;
		        cout<<endl<<endl<<endl;
                }
                while(continuar=="S" || continuar=="s");
                system("pause");
                break;
            }	
        }system("pause");
    }
	while(opcion != '2');
    return 0;

    // do{
    //     cout <<"Introduzca la posicion del numero a buscar: " << endl;
    //     cin >> n;

    //     cout <<"El numero en la posicion " << n << "es el " << PosicionFibonacci(anterior, actual, n) <<  endl;

    //     cout<<"Desea continuar? (S/N): ";
	// 	cin>>continuar;
	// 	cout<<endl<<endl<<endl;

}
