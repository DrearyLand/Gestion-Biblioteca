#include "usuario.h"

Usuario::Usuario(std::string nombre, std::string identificacion) : nombre(nombre), identificacion(identificacion) {}

std::string Usuario::getNombre() const {
    return nombre;
}

std::string Usuario::getIdentificacion() const {
    return identificacion;
}
