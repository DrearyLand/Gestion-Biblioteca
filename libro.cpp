#include "libro.h"

Libro::Libro(int id, std::string fechaAdquisicion, std::string titulo, std::string autor, int anioPublicacion, std::string genero)
    : MaterialBibliotecario(id, fechaAdquisicion), titulo(titulo), autor(autor), anioPublicacion(anioPublicacion), genero(genero) {}

std::string Libro::getTitulo() const {
    return titulo;
}

std::string Libro::getAutor() const {
    return autor;
}

int Libro::getAnioPublicacion() const {
    return anioPublicacion;
}

std::string Libro::getGenero() const {
    return genero;
}
