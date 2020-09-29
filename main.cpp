/*
Ejercicio 8. Escriba un programa que pida un número N e imprima en pantalla su factorial.
Ej: si se ingresa 5: 5!=1*2*3*4*5=120, por lo que se debe imprimir:
5!=120
*/

#include <iostream>
using namespace std;

int main(){

    int numero_A;
    cout << "Ingrese el numero A: ";
    cin >> numero_A;

    int suma = 1;
    for(int i=1; i<=numero_A; i++){
        suma *= i;
        }

    cout << numero_A << "!=" <<  suma << endl;

    return 0;
}
