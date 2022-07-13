#include <iostream>
#include "factura.h"

using namespace std;


void productos(int opcion)
    {
		system ("cls");
		
		int opcionProducto = 0;
		
		switch (opcion)
	    {
		case 1:
		   {
		     	cout << "BEBIDAS CALIENTES" << endl;
		        cout << "*****************" << endl;
		        cout << "1- Capuccino" << endl;
		        cout << "2- Expresso" << endl;
		        cout << "3- Americano" << endl;
		        cout << endl;
		        
				cout << "Ingrese una opcion ";
				cin >> opcionProducto;
		        
		    switch (opcionProducto)
		    {
		     	case 1:
		     	{
		     		agregarProducto("1 Capuccino - L 40.00", 1, 40);
		     		break;
		        }
				case 2:
				{
		     		agregarProducto("1 Expresso - L 30.00", 1, 30);
		     		break;	
		        }
		        case 3:
		     	{
		     		agregarProducto("1 Americano - L 60.00", 1, 60);
		     		break;
		        }
		     	default:
		     	{
		     		    cout << "opcion no valida";
		     		    return; 
		     		    break;
		     	}
				break;
			}
			 cout << endl;
			 cout << "Producto agregado" << endl << endl;
			 system("pause");
			 break;
		}
		case 2:
		{
		
		    cout << "BEBIDAS FRIAS" << endl;
		    cout << "************" << endl;
			cout << "1- Latte" << endl;
		    cout << "2- Ice Cofee" << endl;
		    cout << "1- Mocca" << endl;
		    
		    cout << endl;
		        
			cout << "Ingrese una opcion ";
			cin >> opcionProducto;
		        
		    switch (opcionProducto)
		    {
		    case 1:
		    {
		     	agregarProducto("1 Latte - L 50.00", 1, 50);
		     	break;
		    }
			case 2:
			{
		     	agregarProducto("1 Expresso - L 45.00", 1, 45);
		     	break;
		    }
		    case 3:
		    {
		     	agregarProducto("1 Mocca - L 30.00", 1, 30);
		     	break;
		    }
		    
		    default:
		     	    {
		     		    cout << "opcion no valida";
		     		    return; 
		     		    break;
		     	    }
		     	break;
			}
			 cout << endl;
			 cout << "Producto agregado" << endl << endl;
			 system("pause");
			 break;
       }

		case 3:
		{
		
		    cout << "REPOSTERIA" << endl;
		    cout << "*********" << endl;
		    cout << "1- Panquecito" << endl;
		    cout << "2- Dona" << endl;
		    cout << "3- Semita" << endl;
		    cout << endl;
		        
			cout << "Ingrese una opcion ";
			cin >> opcionProducto;
		        
		    switch (opcionProducto)
		    {
		    case 1:
		    {
		     	agregarProducto("1 Panquecito - L 30.00", 1, 30);
		     	break;
		    }
			case 2:
		    {
		     	agregarProducto("1 Dona - L 20.00", 1, 20);
		     	break;	
		    }
		    case 3:
		    {
		     	agregarProducto("1 Semita - L 10.00", 1, 10);
		     	break;	
		    }
		    
		    default:
		     	    {
		     		    cout << "opcion no valida";
		     		    return; 
		     		    break;
		     	    }
		     	    break;
		    }
			 cout << endl;
			 cout << "Producto agregado" << endl << endl;
		     system("pause");
			 break;
       } 
	}
}
