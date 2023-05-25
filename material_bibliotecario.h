#ifndef MATERIAL_BIBLIOTECARIO_H
#define MATERIAL_BIBLIOTECARIO_H

#include <string>

class MaterialBibliotecario {
private:
    int id;
    std::string fechaAdquisicion;

public:
    MaterialBibliotecario(int id, std::string fechaAdquisicion);

    int getID() const;
    std::string getFechaAdquisicion() const;
    void setFechaAdquisicion(std::string fecha);
};

#endif  // MATERIAL_BIBLIOTECARIO_H