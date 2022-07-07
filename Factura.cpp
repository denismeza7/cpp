#include <iostream>

using namespace std;

double subtotal;
float impuesto = 15;
double totalAPagar;
string listaProductos;
	
	void agregarProducto(string descripcion,int cantidad,double precio) 
    { 
        listaProductos = listaProductos + descripcion + "\n";
        subtotal = subtotal + (cantidad * precio);
	}	
	
	void imprimirFactura()
	{
		system("cls");
		cout << "*******" << endl;
		cout << "Factura" << endl;
		cout << "*******" << endl;
		cout << endl;
		
		cout << "Productos: " << endl;
		cout << listaProductos;
		
		cout << endl;
		impuesto = impuesto / 100;
		impuesto = subtotal * impuesto;
		totalAPagar = subtotal + impuesto;
		cout << "Subtotal: " << subtotal;
		cout << endl;
		cout << "Total Pago: " <<totalAPagar << endl;
		cout << endl;
		system("pause");	
	}
	
