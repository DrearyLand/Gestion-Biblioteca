#include "usuario.h"

using namespace std;

Usuario::Usuario(string nombre, string identificacion) : nombre(nombre), identificacion(identificacion) {}

string Usuario::getNombre() const {
    return nombre;
}

string Usuario::getIdentificacion() const {
    return identificacion;
}