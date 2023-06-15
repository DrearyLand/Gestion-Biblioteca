/*
 * Proyecto Gestion de Biblioteca
 * Ezzat Alzahouri Campos
 * A01710709
 * 14/06/2023
 *
 * Clase Libro la cual hereda de Material Bibliotecario
 * y recibe tanto metodos como atributos, en esta clase 
 * instanciamos los valores necesarios para crear el objeto.
 */

//Bibliotecas necesarias
#include<iostream>
//Clases necesarias
#include "MaterialBibliotecario.h"

using namespace std;

// Clase derivada que representa un Libro
class Libro : public MaterialBibliotecario{
    private:
        string autor,genero;
        int anioPublicacion;
    public:
        // Constructor de la clase Libro que inicializa sus miembros y llama al constructor de la clase base
        Libro(int,string,bool,string,string,string,int);
        Libro(int,string,string,string,bool,string,string,string,int);
        // Implementación del método virtual puro de la clase base
        void mostrarInfo();
};


// Implementación de los constructores y métodos de la clase

Libro::Libro(int _id,string _fechaAdquisicion,bool _disponibilidad,string _titulo,string _autor,string _genero,int _anioPublicacion) : MaterialBibliotecario(_id,_fechaAdquisicion,_disponibilidad,_titulo){
    autor = _autor;
    genero = _genero;
    anioPublicacion = _anioPublicacion;
}
Libro::Libro(int _id,string dia,string mes, string anio,bool _disponibilidad,string _titulo,string _autor,string _genero,int _anioPublicacion) : MaterialBibliotecario(_id,dia,mes,anio,_disponibilidad,_titulo){
    autor = _autor;
    genero = _genero;
    anioPublicacion = _anioPublicacion;
}

/**
 * mostrarInfo mostrar toda la información del libro 
 *
 * La función mostrarInfo() dentro de la clase Libro 
 * imprime por pantalla la información específica de un libro.
 * 
 * @param 
 * @return
 */
void Libro::mostrarInfo(){
    cout<<"Id del Libro: "<<id<<endl;
    cout<<"Fecha de Adquisicion: "<<fechaAdquisicion<<endl;
    cout<<"Titulo: "<<titulo<<endl;
    cout<<"Autor: "<<autor<<endl;
    cout<<"Genero: "<<genero<<endl;
    cout<<"Anio de Publicacion: "<<anioPublicacion<<endl;
}