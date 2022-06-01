#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // Datos de entrada
    int a= 0;
    int b= 0;
    int suma = 0, resta = 0, multiplicacion = 0, division = 0;

    
    cout << "Ingrese el valor de a: ";
    cin >> a;
    
    
    cout << "ingrese el valor de b: ";
    cin >> b;
    
    // Proceso
    suma = a + b;
    resta = a - b;
    multiplicacion = a * b;
    division = a / b;
    
    
    // Salida
    cout << "la suma de a + b es: " <<suma<< " ,la resta de a - b es: " <<resta<< " ,la multiplicacion de a * b es: " <<multiplicacion<< " ,la division de a / b es: " <<division;
    return 0;
    }
	
    
    
    
