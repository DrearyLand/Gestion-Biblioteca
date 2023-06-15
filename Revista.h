/*
 * Proyecto Gestion de Biblioteca
 * Ezzat Alzahouri Campos
 * A01710709
 * 14/06/2023
 *
 * Clase Revista la cual hereda de Material Bibliotecario
 * y recibe tanto metodos como atributos, en esta clase 
 * instanciamos los valores necesarios para crear el objeto.
 */

//Bibliotecas necesarias
#include<iostream>
//Clases necesarias
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

/**
 * mostrarInfo mostrar toda la información de la revista
 *
 * La función mostrarInfo() dentro de la clase Revista 
 * imprime por pantalla la información específica de una revista.
 * 
 * @param 
 * @return
 */

void Revista::mostrarInfo(){
    cout<<"Id de la Revista: "<<id<<endl;
    cout<<"Fecha de Adquisicion: "<<fechaAdquisicion<<endl;
    cout<<"Titulo: "<<titulo<<endl;
    cout<<"Editor: "<<editor<<endl;
    cout<<"Editorial: "<<editorial<<endl;
    cout<<"Volumen: "<<volumen<<endl;
}