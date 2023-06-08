#include<iostream>

using namespace std;

class material_bibliotecario{
    private:
        int id;
        string fechaAdquisicion;
    public:
        material_bibliotecario(int,string);
        material_bibliotecario(int,string,string,string);
        virtual void mostrarInfo();
};

class libro : public material_bibliotecario{
    private:
        string titulo,autor,genero;
        int anioPublicacion;
    public:
        libro(int,string,string,string,string,int);
        void mostrarInfo();
};



material_bibliotecario::material_bibliotecario(int _id,string _fechaAdquisicion){
    id = _id;
    fechaAdquisicion = _fechaAdquisicion;
}

material_bibliotecario::material_bibliotecario(int _id,string dia,string mes, string anio){
    id = _id;
    fechaAdquisicion = anio+"-"+mes+"-"+dia;
}

libro::libro(int _id,string _fechaAdquisicion,string _titulo,string _autor,string _genero,int _anioPublicacion) : material_bibliotecario(_id,_fechaAdquisicion){
    titulo = _titulo;
    autor = _autor;
    genero = _genero;
    anioPublicacion = _anioPublicacion;
}

void material_bibliotecario::mostrarInfo(){
    cout<<"Id del libro: "<<id<<endl;
    cout<<"Fecha de Adquisicion: "<<fechaAdquisicion<<endl;
}

void libro::mostrarInfo(){
    material_bibliotecario::mostrarInfo();
    cout<<"Titulo: "<<titulo<<endl;
    cout<<"Autor: "<<autor<<endl;
    cout<<"Genero: "<<genero<<endl;
    cout<<"Anio de Publicacion: "<<anioPublicacion<<endl;
}

int main(){
    material_bibliotecario *libros[5];

    libros[0] = new libro(1, "2023-06-08", "El Gran Gatsby", "F. Scott Fitzgerald", "Novela", 1925);
    libros[1] = new libro(2, "15/02/2023", "1984", "George Orwell", "Ciencia ficcion",1949);
    libros[2] = new libro(3, "10/03/2023", "Orgullo y prejuicio", "Jane Austen", "Novela romantica",1813);
    libros[3] = new libro(4, "05/04/2023", "Don Quijote de la Mancha", "Miguel de Cervantes", "Novela",1605);
    libros[4] = new libro(5, "20/05/2023", "Cien anos de soledad", "Gabriel Garcia Marquez", "Realismo magico",1967);

    for (int i = 0; i < 5; i++) {
        libros[i]->mostrarInfo();
        cout << "\n";
    }
    
    return 0;
}