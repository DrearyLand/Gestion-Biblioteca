#include<iostream>
#include<vector>

using namespace std;

// Clase padre abstracta que representa material bibliotecario
class material_bibliotecario{
    protected:
        int id;
        string fechaAdquisicion;
        bool disponibilidad;
        string titulo;
    public:
        // Constructor de la clase padre
        material_bibliotecario(int,string,bool,string);
        material_bibliotecario(int,string,string,string,bool,string);
        // Método virtual puro que debe ser implementado por las clases derivadas
        virtual void mostrarInfo() = 0;
        bool getDisponibilidad(){
            return disponibilidad;
        }
};

// Clase que representa una biblioteca
class biblioteca{
    private:
        vector<material_bibliotecario*> contenido; // Vector de punteros a material_bibliotecario
    public:
        // Constructor de la biblioteca que inicializa su contenido
        biblioteca();
        // Método que imprime el contenido de la biblioteca
        void imprimirContenido();
};

// Clase derivada que representa un libro
class libro : public material_bibliotecario{
    private:
        string autor,genero;
        int anioPublicacion;
    public:
        // Constructor de la clase libro que inicializa sus miembros y llama al constructor de la clase base
        libro(int,string,bool,string,string,string,int);
        // Implementación del método virtual puro de la clase base
        void mostrarInfo();
};

// Clase derivada que representa una revista
class revista : public material_bibliotecario{
    private:
        string editor,editorial;
        int volumen;
    public:
        // Constructor de la clase revista que inicializa sus miembros y llama al constructor de la clase base
        revista(int,string,bool,string,string,string,int);
        // Implementación del método virtual puro de la clase base
        void mostrarInfo();
};

// Implementación de los constructores y métodos de las clases

material_bibliotecario::material_bibliotecario(int _id,string _fechaAdquisicion,bool _disponibilidad,string _titulo){
    id = _id;
    fechaAdquisicion = _fechaAdquisicion;
    disponibilidad = _disponibilidad;
    titulo = _titulo;
}

material_bibliotecario::material_bibliotecario(int _id,string dia,string mes, string anio,bool _disponibilidad,string _titulo){
    id = _id;
    fechaAdquisicion = anio+"-"+mes+"-"+dia;
    disponibilidad = _disponibilidad;
    titulo = _titulo;
}

biblioteca::biblioteca(){
    contenido.push_back(new libro(1, "2023-06-08",true, "El Gran Gatsby", "F. Scott Fitzgerald", "Novela", 1925));
    contenido.push_back(new libro(2, "2023-01-15",true, "1984", "George Orwell", "Ciencia ficcion",1949));
    contenido.push_back(new libro(3, "2023-03-22",false, "Orgullo y prejuicio", "Jane Austen", "Novela romantica",1813));
    contenido.push_back(new libro(4, "2023-04-10",false, "Don Quijote de la Mancha", "Miguel de Cervantes", "Novela",1605));
    contenido.push_back(new libro(5, "2023-05-01",false, "Cien anos de soledad", "Gabriel Garcia Marquez", "Realismo magico",1967));
    contenido.push_back(new revista(6,"2023-06-18",true, "Science Today", "John Smith", "Academic Press", 15));
    contenido.push_back(new revista(7,"2023-07-07", false, "Fashion World", "Sarah Thompson", "Style Publications", 8));
    contenido.push_back(new revista(8,"2023-08-12", false, "Nature's Beauty", "Michael Johnson", "Michael Johnson", 3));
    contenido.push_back(new revista(9,"2023-09-29", true, "Tech Innovations", "Jennifer Davis", "Techno Publishing", 12));
    contenido.push_back(new revista(10,"2023-10-16", true, "Health & Wellness", "Robert Wilson", "Healthy Living Media", 6));
}

void biblioteca::imprimirContenido(){
    cout<<"Todo el contenido: "<<endl<<"______________________________________\n\n";
    for (int i = 0; i < contenido.size(); ++i) {
        if (i==0){
            cout<<"Libros:"<<endl<<"--------------------"<<endl;
        }if (i==5){
            cout<<"Revistas:"<<endl<<"--------------------"<<endl;
        }
        contenido[i]->mostrarInfo();
        cout << "\n";
    }
}

libro::libro(int _id,string _fechaAdquisicion,bool _disponibilidad,string _titulo,string _autor,string _genero,int _anioPublicacion) : material_bibliotecario(_id,_fechaAdquisicion,_disponibilidad,_titulo){
    autor = _autor;
    genero = _genero;
    anioPublicacion = _anioPublicacion;
}

void libro::mostrarInfo(){
    cout<<"Id del libro: "<<id<<endl;
    cout<<"Fecha de Adquisicion: "<<fechaAdquisicion<<endl;
    cout<<"Titulo: "<<titulo<<endl;
    cout<<"Autor: "<<autor<<endl;
    cout<<"Genero: "<<genero<<endl;
    cout<<"Anio de Publicacion: "<<anioPublicacion<<endl;
}

revista::revista(int _id,string _fechaAdquisicion,bool _disponibilidad,string _titulo,string _editor,string _editorial,int _volumen) : material_bibliotecario(_id,_fechaAdquisicion,_disponibilidad,_titulo){
    editor = _editor;
    editorial = _editorial;
    volumen = _volumen;
}

void revista::mostrarInfo(){
    cout<<"Id de la revista: "<<id<<endl;
    cout<<"Fecha de Adquisicion: "<<fechaAdquisicion<<endl;
    cout<<"Titulo: "<<titulo<<endl;
    cout<<"Editor: "<<editor<<endl;
    cout<<"Editorial: "<<editorial<<endl;
    cout<<"Volumen: "<<volumen<<endl;
}

int main(){
    biblioteca contenidos; // Creación de una instancia de la biblioteca

    contenidos.imprimirContenido(); // Llamada al método que imprime el contenido de la biblioteca
    
    return 0;
}





