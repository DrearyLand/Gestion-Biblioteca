#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <vector>
#include "libro.h"
#include "usuario.h"

using namespace std;

class Biblioteca {
private:
    vector<Libro> librosDisponibles;
    vector<Libro> librosPrestados;

public:
    void agregarLibro(const Libro& libro);
    void prestarLibro(const Libro& libro, const Usuario& usuario);
    void devolverLibro(const Libro& libro, const Usuario& usuario);
    vector<Libro> consultarLibrosDisponibles() const;
};

#endif  // BIBLIOTECA_H
