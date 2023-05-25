#include "libro.h"
#include <iostream>

using namespace std;

Libro::Libro(int id, string fechaAdquisicion, string titulo, string autor, int anioPublicacion, string genero)
    : MaterialBibliotecario(id, fechaAdquisicion), titulo(titulo), autor(autor), anioPublicacion(anioPublicacion), genero(genero) {}

string Libro::getTitulo() const {
    return titulo;
}

string Libro::getAutor() const {
    return autor;
}

int Libro::getAnioPublicacion() const {
    return anioPublicacion;
}

string Libro::getGenero() const {
    return genero;
}

void Libro::mostrarInformacion() const {
    cout << "Título: " << titulo << endl;
    cout << "Autor: " << autor << endl;
    cout << "Año de publicación: " << anioPublicacion << endl;
    cout << "Género: " << genero << endl;
}
