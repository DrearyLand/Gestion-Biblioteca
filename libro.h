#ifndef LIBRO_H
#define LIBRO_H

#include <string>
#include "material_bibliotecario.h"

using namespace std;

class Libro : public MaterialBibliotecario {
private:
    string titulo;
    string autor;
    int anioPublicacion;
    string genero;

public:
    Libro(int id, string fechaAdquisicion, string titulo, string autor, int anioPublicacion, string genero);

    string getTitulo() const;
    string getAutor() const;
    int getAnioPublicacion() const;
    string getGenero() const;

    void mostrarInformacion() const;
};

#endif  // LIBRO_H
