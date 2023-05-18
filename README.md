# Sistema de Gestión de Biblioteca
Este proyecto es un sistema de gestión de una biblioteca que permite administrar los libros disponibles, los préstamos realizados por los usuarios y el registro de nuevos libros en la biblioteca. Está desarrollado utilizando programación orientada a objetos y abarca los conceptos de herencia, polimorfismo, sobrecarga de operadores y manejo de excepciones.

## Características
- Registro de libros: Permite agregar nuevos libros a la biblioteca con información como título, autor, año de publicación y género.
- Préstamo de libros: Los usuarios pueden solicitar préstamos de libros disponibles en la biblioteca.
- Devolución de libros: Los usuarios pueden devolver los libros prestados anteriormente.
- Consulta de libros disponibles: Permite verificar los libros disponibles en la biblioteca.

## Diagrama de Clases
El proyecto está compuesto por las siguientes clases:

- MaterialBibliotecario: Clase base abstracta que representa el material bibliotecario. Contiene los atributos id y fechaAdquisicion, y los métodos para acceder y modificar estos atributos.
- Libro: Clase que hereda de MaterialBibliotecario y representa un libro en la biblioteca. Tiene los atributos titulo, autor, anioPublicacion y genero, y los métodos correspondientes para acceder a ellos.
- Usuario: Clase que representa a un usuario de la biblioteca. Contiene los atributos nombre e identificacion, y los métodos para obtener estos valores.
- Biblioteca: Clase que actúa como controlador del sistema. Gestiona la lista de libros disponibles y prestados. Permite agregar nuevos libros, prestar y devolver libros, y consultar los libros disponibles en la biblioteca.
