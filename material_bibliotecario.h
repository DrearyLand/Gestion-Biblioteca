#ifndef MATERIAL_BIBLIOTECARIO_H
#define MATERIAL_BIBLIOTECARIO_H

#include <string>

using namespace std;

class MaterialBibliotecario {
private:
    int id;
    string fechaAdquisicion;

public:
    MaterialBibliotecario(int id, string fechaAdquisicion);

    int getID() const;
    string getFechaAdquisicion() const;
    void setFechaAdquisicion(string fecha);
};

#endif  // MATERIAL_BIBLIOTECARIO_H
