/*
 * Proyecto Gestion de Biblioteca
 * Ezzat Alzahouri Campos
 * A01710709
 * 14/06/2023
 *
 * La clase "Biblioteca" encapsula la funcionalidad de una biblioteca, 
 * permitiendo la visualización del contenido, la visualización del 
 * contenido disponible y la adición de nuevo contenido. 
 * Además, utiliza la herencia y el polimorfismo para manejar diferentes
 * tipos de materiales bibliotecarios de manera eficiente.
 */

//Bibliotecas necesarias
#include<iostream>
#include<vector>
//Clases necesarias
#include "MaterialBibliotecario.h"
#include "Libro.h"
#include "Revista.h"

using namespace std;

// Clase que representa una Biblioteca
class Biblioteca{
    private:
        vector<MaterialBibliotecario*> contenido; // Vector de punteros a MaterialBibliotecario
    public:
        // Constructor de la Biblioteca que inicializa su contenido
        Biblioteca();
        // Método que imprime el contenido de la Biblioteca
        void imprimirContenido();
        void imprimirContenidoDisponible();
        void agregarContenido();
};


// Implementación de los constructores y métodos de la clase

Biblioteca::Biblioteca(){
    contenido.push_back(new Libro(1, "2023-06-08",true, "El Gran Gatsby", "F. Scott Fitzgerald", "Novela", 1925));
    contenido.push_back(new Libro(2, "15","01","2023",true, "1984", "George Orwell", "Ciencia ficcion",1949));
    contenido.push_back(new Libro(3, "2023-03-22",false, "Orgullo y prejuicio", "Jane Austen", "Novela romantica",1813));
    contenido.push_back(new Libro(4, "2023-04-10",false, "Don Quijote de la Mancha", "Miguel de Cervantes", "Novela",1605));
    contenido.push_back(new Libro(5, "2023-05-01",false, "Cien anos de soledad", "Gabriel Garcia Marquez", "Realismo magico",1967));
    contenido.push_back(new Revista(6,"2023-06-18",true, "Science Today", "John Smith", "Academic Press", 15));
    contenido.push_back(new Revista(7,"2023-07-07", false, "Fashion World", "Sarah Thompson", "Style Publications", 8));
    contenido.push_back(new Revista(8,"2023-08-12", false, "Nature's Beauty", "Michael Johnson", "Michael Johnson", 3));
    contenido.push_back(new Revista(9,"29","09","2023", true, "Tech Innovations", "Jennifer Davis", "Techno Publishing", 12));
    contenido.push_back(new Revista(10,"2023-10-16", true, "Health & Wellness", "Robert Wilson", "Healthy Living Media", 6));
}

/**
 * imprimirContenido imprimimos todo el contendio
 *
 * Esta función recorre todo el vector de punteros "contenido"
 * y revisa que tipo de contenido es, de esta manera muestra 
 * todo el contenido mencionando si es Libro o Revista, manda a
 * llamar a mostrarInfo() para imprimir las caracteristicas de 
 * cualquier objeto en el vector.
 *
 * @param 
 * @return
 */
void Biblioteca::imprimirContenido(){
    cout<<"\n\nTodo el contenido: "<<endl<<"______________________________________\n\n";
    for(MaterialBibliotecario *con : contenido){
        if(dynamic_cast<Libro *>(con)){
            cout << "\nLibro: " << endl;
            con->mostrarInfo();
        }
        else{
            cout << "\nRevista: " << endl;
            con->mostrarInfo();       
        }
    }
}

/**
 * imprimirContenidoDisponible imprimimos todo el contendio disponible
 *
 * Esta función de igual manera que imprimeContenido() usa un 
 * ciclo for para recorrer el vector, la diferencia es que verificara
 * con un getter "getDisponibilidad()" de  MaterialBibliotecario
 * si el libro esta disponible o no, usando un valor booleano.
 *
 * @param 
 * @return
 */
void Biblioteca::imprimirContenidoDisponible(){
    cout<<"\n\nContenido Disponible: "<<endl<<"______________________________________\n\n";
    for(MaterialBibliotecario *con : contenido){
        if(dynamic_cast<Libro *>(con)){
            if (con->MaterialBibliotecario::getDisponibilidad()) {
                    cout << "\nLibro: " << endl;
                    con->mostrarInfo();
            }
        }
        else{
            if (con->MaterialBibliotecario::getDisponibilidad()) {
                    cout << "\nRevista: " << endl;
                    con->mostrarInfo(); 
            }      
        }
    }
}

/**
 * agregarContenido agrega contenido a la biblioteca
 *
 * Esta función establece una comunicacion entre user y program
 * el usuario tendra que ingresar los datos necesarios para 
 * agregar un libro o una revista a la biblioteca, se le solicitaran
 * uno por uno y ya que este completado lo agregara al vector para despues
 * poder imprimir el contenido actualizado.
 * 
 * @param 
 * @return
 */
void Biblioteca::agregarContenido() {
    int tipo;
    cout << "Ingrese el tipo de contenido a agregar (1 para libro, 2 para revista): ";
    cin >> tipo;

    int id,anioPublicacion,volumen;
    string fecha,titulo,autor,genero,editor,editorial;
    bool disponibilidad;
    

    cout << "Ingrese el ID: ";
    cin >> id;
    cout << "Ingrese la fecha de adquisicion (YYYY-MM-DD): ";
    cin >> fecha;
    cout << "Ingrese la disponibilidad (1 para disponible, 0 para no disponible): ";
    cin >> disponibilidad;
    cout << "Ingrese el titulo del contenido: ";
    cin.ignore(); // Limpiar el buffer del teclado antes de getline
    getline(cin, titulo);

    if (tipo == 1) {
        cout << "Ingrese el autor del libro: ";
        getline(cin, autor);
        cout << "Ingrese el genero del libro: ";
        getline(cin, genero);
        cout << "Ingrese el anio de publicacion del libro: ";
        cin >> anioPublicacion;
        contenido.push_back(new Libro(id, fecha, disponibilidad, titulo, autor, genero, anioPublicacion));
        cout << "Libro agregado exitosamente." << endl;
    } else if (tipo == 2) {
        cout << "Ingrese el editor de la revista: ";
        getline(cin, editor);
        cout << "Ingrese el editorial de la revista: ";
        getline(cin, editorial);
        cout << "Ingrese el volumen de la revista: ";
        cin >> volumen;
        contenido.push_back(new Revista(id, fecha, disponibilidad, titulo, editor, editorial, volumen));
        cout << "Revista agregada exitosamente." << endl;
    } else {
        cout << "Tipo de contenido invalido." << endl;
    }
}

