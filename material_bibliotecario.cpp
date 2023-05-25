#include "material_bibliotecario.h"

MaterialBibliotecario::MaterialBibliotecario(int id, std::string fechaAdquisicion) : id(id), fechaAdquisicion(fechaAdquisicion) {}

int MaterialBibliotecario::getID() const {
    return id;
}

std::string MaterialBibliotecario::getFechaAdquisicion() const {
    return fechaAdquisicion;
}

void MaterialBibliotecario::setFechaAdquisicion(std::string fecha) {
    fechaAdquisicion = fecha;
}