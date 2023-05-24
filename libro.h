#ifndef LIBRO_H
#define LIBRO_H

#include <string>
#include "material_bibliotecario.h"

class Libro : public MaterialBibliotecario {
private:
    std::string titulo;
    std::string autor;
    int anioPublicacion;
    std::string genero;

public:
    Libro(int id, std::string fechaAdquisicion, std::string titulo, std::string autor, int anioPublicacion, std::string genero);

    std::string getTitulo() const;
    std::string getAutor() const;
    int getAnioPublicacion() const;
    std::string getGenero() const;
};

#endif  // LIBRO_H
