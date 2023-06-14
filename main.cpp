/*
 * Proyecto Gestion de Biblioteca
 * Ezzat Alzahouri Campos
 * A01710709
 * 14/06/2023
 *
 * Proyecto para gestionar biblioteca, el proyecto
 * consta en poder ver el contenido(libros y revistas), 
 * ver que esta disponible y poder agregar contenido,
 * de esta manera el programa sirve para gestionar el 
 * inventario desde la perspectiva de un empleado en 
 * la biblioteca.
 */


//Bibliotecas básicas
#include<iostream>
#include<vector>
//Objetos necesarios
#include "Biblioteca.h"

using namespace std;

//Funcion main con menu para llamar los metodos necesarios
int main() {
    Biblioteca contenidos; // Creación de una instancia de la biblioteca
    
    int opcion;
    
    do {
        cout << "----- Menu -----" << endl;
        cout << "1. Ver contenido" << endl;
        cout << "2. Ver contenido disponible" << endl;
        cout << "3. Agregar contenido" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese el numero de opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
                contenidos.imprimirContenido();
                break;
            case 2:
                contenidos.imprimirContenidoDisponible();
                break;
            case 3:
                contenidos.agregarContenido();
                break;
            case 4:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
                break;
        }
        
        cout << endl;
    } while (opcion != 4);
    
    return 0;
}