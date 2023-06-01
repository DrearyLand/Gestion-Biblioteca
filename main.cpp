#include <iostream>
#include <vector>

using namespace std;

class MaterialBibliotecario {
private:
    int id;
    string fechaAdquisicion;

public:
    MaterialBibliotecario(int id, string fechaAdquisicion) : id(id), fechaAdquisicion(fechaAdquisicion) {}

    int getID() const {
        return id;
    }

    string getFechaAdquisicion() const {
        return fechaAdquisicion;
    }

    void setFechaAdquisicion(string fecha) {
        fechaAdquisicion = fecha;
    }

    // Método virtual para imprimir información del material bibliotecario
    virtual void imprimirInformacion() const {
        cout << "ID: " << id << ", Fecha de adquisición: " << fechaAdquisicion << endl;
    }
};

class Libro : public MaterialBibliotecario {
private:
    string titulo;
    string autor;
    int anioPublicacion;
    string genero;

public:
    Libro(int id, string fechaAdquisicion, string titulo, string autor, int anioPublicacion, string genero)
        : MaterialBibliotecario(id, fechaAdquisicion), titulo(titulo), autor(autor), anioPublicacion(anioPublicacion), genero(genero) {}

    string getTitulo() const {
        return titulo;
    }

    string getAutor() const {
        return autor;
    }

    int getAnioPublicacion() const {
        return anioPublicacion;
    }

    string getGenero() const {
        return genero;
    }

    // Sobrecarga del operador de salida para imprimir información del libro
    friend ostream& operator<<(ostream& os, const Libro& libro) {
        os << "Titulo: " << libro.titulo << ", Autor: " << libro.autor << ", Año de publicacion: " << libro.anioPublicacion << ", Genero: " << libro.genero;
        return os;
    }

    // Sobreescritura del método para imprimir información del libro
    void imprimirInformacion() const override {
        cout << "Libro: " << titulo << ", Autor: " << autor << ", Ano de publicacion: " << anioPublicacion << ", Genero: " << genero << endl;
    }
};

class Usuario {
private:
    string nombre;
    string identificacion;

public:
    Usuario(string nombre, string identificacion) : nombre(nombre), identificacion(identificacion) {}

    string getNombre() const {
        return nombre;
    }

    string getIdentificacion() const {
        return identificacion;
    }
};

class Biblioteca {
private:
    vector<MaterialBibliotecario*> materialesBibliotecarios;

public:
    void agregarMaterialBibliotecario(MaterialBibliotecario* material) {
        materialesBibliotecarios.push_back(material);
    }

    void imprimirInformacionMateriales() const {
        for (const auto& material : materialesBibliotecarios) {
            material->imprimirInformacion();
        }
    }
};

int main() {
    Biblioteca biblioteca;

    Libro libro1(1, "01/01/2023", "El Gran Gatsby", "F. Scott Fitzgerald", 1925, "Novela");
    Libro libro2(2, "15/02/2023", "1984", "George Orwell", 1949, "Ciencia ficcion");
    Libro libro3(3, "10/03/2023", "Orgullo y prejuicio", "Jane Austen", 1813, "Novela romantica");
    Libro libro4(4, "05/04/2023", "Don Quijote de la Mancha", "Miguel de Cervantes", 1605, "Novela");
    Libro libro5(5, "20/05/2023", "Cien anos de soledad", "Gabriel Garcia Marquez", 1967, "Realismo magico");

    biblioteca.agregarMaterialBibliotecario(&libro1);
    biblioteca.agregarMaterialBibliotecario(&libro2);
    biblioteca.agregarMaterialBibliotecario(&libro3);
    biblioteca.agregarMaterialBibliotecario(&libro4);
    biblioteca.agregarMaterialBibliotecario(&libro5);

    biblioteca.imprimirInformacionMateriales();

    return 0;
}
