#include "biblioteca.h"

using namespace std;

void Biblioteca::agregarLibro(const Libro& libro) {
    librosDisponibles.push_back(libro);
}

void Biblioteca::prestarLibro(const Libro& libro, const Usuario& usuario) {
    // Verificar si el libro está disponible en librosDisponibles
    // y realizar la operación de préstamo
    // ...
}

void Biblioteca::devolverLibro(const Libro& libro, const Usuario& usuario) {
    // Verificar si el libro pertenece al usuario y realizar la operación de devolución
    // ...
}

vector<Libro> Biblioteca::consultarLibrosDisponibles() const {
    return librosDisponibles;
}
