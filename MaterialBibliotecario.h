/*
 * Proyecto Gestion de Biblioteca
 * Ezzat Alzahouri Campos
 * A01710709
 * 14/06/2023
 *
 * La clase "MaterialBibliotecario" sirve como una clase padre abstracta 
 * que proporciona una estructura básica para representar un material bibliotecario.
 * Las clases derivadas (como "Libro" y "Revista") deben heredar de esta clase y 
 * proporcionar su propia implementación del método mostrarInfo(). 
 * Esto permite tratar diferentes tipos de materiales bibliotecarios de manera 
 * uniforme y acceder a su información común a través de la clase padre.
 */


#ifndef MaterialBibliotecario_H
#define MaterialBibliotecario_H
//Bibliotecas necesarias
#include<iostream>

using namespace std;

// Clase padre abstracta que representa material bibliotecario
class MaterialBibliotecario{
    protected:
        int id;
        string fechaAdquisicion;
        bool disponibilidad;
        string titulo;
    public:
        // Constructor de la clase padre
        MaterialBibliotecario();
        MaterialBibliotecario(int,string,bool,string);
        MaterialBibliotecario(int,string,string,string,bool,string);
        // Método virtual puro que debe ser implementado por las clases derivadas
        virtual void mostrarInfo() = 0;
        bool getDisponibilidad(){
            return disponibilidad;
        }

};


// Implementación de los constructores de la clase 

MaterialBibliotecario::MaterialBibliotecario(){
    id = 0;
    titulo = "";
    disponibilidad = false;
    fechaAdquisicion = "";
}

MaterialBibliotecario::MaterialBibliotecario(int _id,string _fechaAdquisicion,bool _disponibilidad,string _titulo){
    id = _id;
    fechaAdquisicion = _fechaAdquisicion;
    disponibilidad = _disponibilidad;
    titulo = _titulo;
}

MaterialBibliotecario::MaterialBibliotecario(int _id,string dia,string mes, string anio,bool _disponibilidad,string _titulo){
    id = _id;
    fechaAdquisicion = anio+"-"+mes+"-"+dia;
    disponibilidad = _disponibilidad;
    titulo = _titulo;
}

#endif