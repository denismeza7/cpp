#include <iostream>
#include <math.h>

using namespace std;

double raizcuadrada(double x){
return sqrt (x);
}

int main(int argc, char** argv) {
	
	double x = 0;
	cout << "Ingrese un numero: ";
	cin >> x;
	
	cout << "El resultado de la raiz es: " << raizcuadrada(x);
	
	return 0;
}
