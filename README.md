```yaml
nombre: Ezzat Alzahouri C. 
matricula: A01710709. 
proyecto: Sistema de Gestión de Biblioteca
```

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

## Posibles problemas

1. Agregar un libro con información incorrecta: Si el usuario proporciona información incorrecta al momento de agregar un libro, como un año de publicación inválido o un género no reconocido, el programa podría no funcionar correctamente al realizar operaciones con ese libro.

2. Prestar un libro no disponible: Si el usuario intenta prestar un libro que no se encuentra disponible en la biblioteca, el programa podría generar un error o no realizar la operación correctamente.

3. Devolver un libro incorrecto: Si el usuario devuelve un libro que no ha sido prestado por él mismo o devuelve un libro que no pertenece a la biblioteca, el programa podría generar un error o no registrar correctamente la devolución.

4. Consultar libros sin conexión a la biblioteca: Si el programa requiere una conexión a una base de datos o sistema externo para consultar los libros disponibles, la falta de conexión podría impedir que el usuario pueda acceder a la información actualizada.

5. Errores en el manejo de excepciones: Si el programa no maneja adecuadamente las excepciones, como errores de entrada o problemas de conexión, podría producirse una interrupción inesperada y el programa dejaría de funcionar.

## Requisitos previos
Antes de ejecutar este programa, asegúrate de tener instalado el siguiente software:

C++ Compiler - Un compilador C++ compatible con tu sistema operativo.

## Descarga y ejecución
Sigue estos pasos para descargar y ejecutar el código:

1. Clona el repositorio en tu máquina local o descarga el código fuente en formato ZIP.
2. Abre una terminal o línea de comandos y navega hasta la ubicación donde hayas descargado el código.
3. Compila los archivos fuente utilizando el compilador C++. Ejecuta el siguiente comando en la terminal:
```
g++ .\biblioteca.cpp .\libro.cpp .\main.cpp .\material_bibliotecario.cpp .\usuario.cpp
```
4. Este comando compilará los archivos fuente y generará un archivo ejecutable llamado biblioteca en el directorio actual.
5. Ejecuta el programa con el siguiente comando:
```
./a.exe
```
El programa se ejecutará y mostrará la lista de libros disponibles en la biblioteca.
