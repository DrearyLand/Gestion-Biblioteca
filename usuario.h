#ifndef USUARIO_H
#define USUARIO_H

#include <string>

class Usuario {
private:
    std::string nombre;
    std::string identificacion;

public:
    Usuario(std::string nombre, std::string identificacion);

    std::string getNombre() const;
    std::string getIdentificacion() const;
};

#endif  // USUARIO_H