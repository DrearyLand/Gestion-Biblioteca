#include<iostream>
#include<vector>
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
        //void imprimirContenidoDisponible();
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

// void Biblioteca::imprimirContenidoDisponible(){
//     cout<<"\n\nContenido Disponible: "<<endl<<"______________________________________\n\n";
//     for(MaterialBibliotecario *con : contenido){
//         if(dynamic_cast<Libro *>(con)){
//             cout << "\nLibro: " << endl;
//             con->mostrarInfo();
//         }
//         else{
//             cout << "\nRevista: " << endl;
//             con->mostrarInfo();       
//         }
//     }
// }