#include <iostream>
#include "libro.h"
#include "usuario.h"
#include "biblioteca.h"
#include "material_bibliotecario.h"

using namespace std;

int main() {
    Biblioteca biblioteca;

    Libro libro1(1, "01/01/2023", "El Gran Gatsby", "F. Scott Fitzgerald", 1925, "Novela");
    Libro libro2(2, "15/02/2023", "1984", "George Orwell", 1949, "Ciencia ficción");
    Libro libro3(3, "10/03/2023", "Orgullo y prejuicio", "Jane Austen", 1813, "Novela romántica");
    Libro libro4(4, "05/04/2023", "Don Quijote de la Mancha", "Miguel de Cervantes", 1605, "Novela");
    Libro libro5(5, "20/05/2023", "Cien anos de soledad", "Gabriel Garcia Marquez", 1967, "Realismo mágico");

    biblioteca.agregarLibro(libro1);
    biblioteca.agregarLibro(libro2);
    biblioteca.agregarLibro(libro3);
    biblioteca.agregarLibro(libro4);
    biblioteca.agregarLibro(libro5);

    vector<Libro> librosDisponibles = biblioteca.consultarLibrosDisponibles();
    cout << "Libros disponibles:" << endl;
    for (const auto& libro : librosDisponibles) {
        cout << "Titulo: " << libro.getTitulo() << ", Autor: " << libro.getAutor() << endl;
    }

    return 0;
}