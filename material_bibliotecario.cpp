#include "material_bibliotecario.h"

MaterialBibliotecario::MaterialBibliotecario(int id, string fechaAdquisicion):id(id), fechaAdquisicion(fechaAdquisicion) {}

int MaterialBibliotecario::getID() const {
    return id;
}

string MaterialBibliotecario::getFechaAdquisicion() const {
    return fechaAdquisicion;
}

void MaterialBibliotecario::setFechaAdquisicion(string fecha) {
    fechaAdquisicion = fecha;
}
