#include<iostream>
#include "MaterialBibliotecario.h"

using namespace std;

// Clase derivada que representa una Revista
class Revista : public MaterialBibliotecario{
    private:
        string editor,editorial;
        int volumen;
    public:
        // Constructor de la clase Revista que inicializa sus miembros y llama al constructor de la clase base
        Revista(int,string,bool,string,string,string,int);
        Revista(int,string,string,string,bool,string,string,string,int);
        // Implementación del método virtual puro de la clase base
        void mostrarInfo();
};


// Implementación de los constructores y métodos de la clase

Revista::Revista(int _id,string _fechaAdquisicion,bool _disponibilidad,string _titulo,string _editor,string _editorial,int _volumen) : MaterialBibliotecario(_id,_fechaAdquisicion,_disponibilidad,_titulo){
    editor = _editor;
    editorial = _editorial;
    volumen = _volumen;
}
Revista::Revista(int _id,string dia,string mes, string anio,bool _disponibilidad,string _titulo,string _editor,string _editorial,int _volumen) : MaterialBibliotecario(_id,dia,mes,anio,_disponibilidad,_titulo){
    editor = _editor;
    editorial = _editorial;
    volumen = _volumen;
}

void Revista::mostrarInfo(){
    cout<<"Id de la Revista: "<<id<<endl;
    cout<<"Fecha de Adquisicion: "<<fechaAdquisicion<<endl;
    cout<<"Titulo: "<<titulo<<endl;
    cout<<"Editor: "<<editor<<endl;
    cout<<"Editorial: "<<editorial<<endl;
    cout<<"Volumen: "<<volumen<<endl;
}