#include <iostream>
using namespace std;

int main() 
{
    int pares = 0;
    int impares = 0;
    int total = 0;
    
	for(int i = 1; i <= 10; i++)
	{
		if (i % 2 == 0) 
		{
		    pares = pares + i;
		}
		else
		{
		    impares = impares + i;
		}
		cout << i <<" ";	
	}
	
	cout << endl;
	total = pares + impares;
	cout << "\nTotal de pares: "<< pares;
	cout << "\nTotal de impares: "<< impares;
	cout << "\nEl Total es: "<< total;
	
	return 0;
}
