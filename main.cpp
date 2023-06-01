#include <iostream>
#include <vector>

using namespace std;

class MaterialBibliotecario {
private:
    int id;
    string fechaAdquisicion;

public:
    // Constructor de la clase MaterialBibliotecario
    MaterialBibliotecario(int id, string fechaAdquisicion) : id(id), fechaAdquisicion(fechaAdquisicion) {}

    // Getter para el ID
    int getID() const {
        return id;
    }

    // Getter para la fecha de adquisición
    string getFechaAdquisicion() const {
        return fechaAdquisicion;
    }

    // Setter para la fecha de adquisición
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
    // Constructor de la clase Libro
    Libro(int id, string fechaAdquisicion, string titulo, string autor, int anioPublicacion, string genero)
        : MaterialBibliotecario(id, fechaAdquisicion), titulo(titulo), autor(autor), anioPublicacion(anioPublicacion), genero(genero) {}

    // Getter para el título del libro
    string getTitulo() const {
        return titulo;
    }

    // Getter para el autor del libro
    string getAutor() const {
        return autor;
    }

    // Getter para el año de publicación del libro
    int getAnioPublicacion() const {
        return anioPublicacion;
    }

    // Getter para el género del libro
    string getGenero() const {
        return genero;
    }

    // Sobrecarga del operador de salida para imprimir información del libro
    friend ostream& operator<<(ostream& os, const Libro& libro) {
        os << "Titulo: " << libro.titulo << ", Autor: " << libro.autor << ", Ano de publicacion: " << libro.anioPublicacion << ", Genero: " << libro.genero;
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
    // Constructor de la clase Usuario
    Usuario(string nombre, string identificacion) : nombre(nombre), identificacion(identificacion) {}

    // Getter para el nombre del usuario
    string getNombre() const {
        return nombre;
    }

    // Getter para la identificación del usuario
    string getIdentificacion() const {
        return identificacion;
    }
};

class Biblioteca {
private:
    vector<MaterialBibliotecario*> materialesBibliotecarios;

public:
    // Función para agregar un material bibliotecario a la biblioteca
    void agregarMaterialBibliotecario(MaterialBibliotecario* material) {
        materialesBibliotecarios.push_back(material);
    }

    // Función para imprimir la información de todos los materiales en la biblioteca
    void imprimirInformacionMateriales() const {
        for (const auto& material : materialesBibliotecarios) {
            material->imprimirInformacion();
        }
    }
};

int main() {
    Biblioteca biblioteca;

    // Creación de objetos Libro
    Libro libro1(1, "01/01/2023", "El Gran Gatsby", "F. Scott Fitzgerald", 1925, "Novela");
    Libro libro2(2, "15/02/2023", "1984", "George Orwell", 1949, "Ciencia ficcion");
    Libro libro3(3, "10/03/2023", "Orgullo y prejuicio", "Jane Austen", 1813, "Novela romantica");
    Libro libro4(4, "05/04/2023", "Don Quijote de la Mancha", "Miguel de Cervantes", 1605, "Novela");
    Libro libro5(5, "20/05/2023", "Cien anos de soledad", "Gabriel Garcia Marquez", 1967, "Realismo magico");

    // Agregar los libros a la biblioteca
    biblioteca.agregarMaterialBibliotecario(&libro1);
    biblioteca.agregarMaterialBibliotecario(&libro2);
    biblioteca.agregarMaterialBibliotecario(&libro3);
    biblioteca.agregarMaterialBibliotecario(&libro4);
    biblioteca.agregarMaterialBibliotecario(&libro5);

    // Imprimir información de los materiales en la biblioteca
    biblioteca.imprimirInformacionMateriales();

    return 0;
}
