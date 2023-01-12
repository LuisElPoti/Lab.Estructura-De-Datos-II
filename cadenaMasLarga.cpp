/*
CadenaMasLarga.cpp
Autor: Luis Adames ID: 1106170
Asunto: Crear un programa que obtenga el numero que genere la cadena mas larga al realizar las siguientes operaciones
 - Si el numero es par, dividir entre 2
 - Si el numero es impart, multiplicar por 3 y sumar 1
 
Cuando se llegue a 4 la cadena debe parar.
*/

#include <iostream>
#include <math.h>

using namespace std;

int cadenaMasLarga(int n, int iteracion){

    if(n == 4){
        return iteracion;
    }
    else{
    	if(n % 2 == 0) return cadenaMasLarga(n/2, iteracion + 1);
    	else return cadenaMasLarga((3*n) + 1, iteracion + 1);
	}
   
}

int main(){

    int mayorCadena = 1;

    for(int i = 2; i < 100; i++){

        if(cadenaMasLarga(i,0) > cadenaMasLarga(mayorCadena,0)){
            mayorCadena = i;
        }
    }
    cout << "La cadena mas larga es: " << mayorCadena << " Con una longitud de " << cadenaMasLarga(mayorCadena,0) << endl;
    return 0;
}
