#ifndef USUARIO_H
#define USUARIO_H

#include <string>

using namespace std;

class Usuario {
private:
    string nombre;
    string identificacion;

public:
    Usuario(string nombre, string identificacion);

    string getNombre() const;
    string getIdentificacion() const;
};

#endif  // USUARIO_H