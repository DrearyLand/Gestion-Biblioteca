```yaml
nombre: Ezzat Alzahouri C. 
matricula: A01710709. 
proyecto: Sistema de Gestión de Biblioteca
```

# Sistema de Gestión de Biblioteca
Este proyecto consiste en una biblioteca virtual que permite administrar y mostrar información sobre libros y revistas. El código está escrito en C++ y utiliza el concepto de herencia y polimorfismo para representar diferentes tipos de materiales bibliotecarios.

## Características

- La biblioteca virtual puede contener libros y revistas.
- Cada material bibliotecario tiene un identificador único, fecha de adquisición, disponibilidad y título.
- Los libros tienen información adicional como autor, género y año de publicación.
- Las revistas tienen información adicional como editor, editorial y volumen.
- La biblioteca se inicializa con algunos libros y revistas predefinidos.
- Se puede imprimir el contenido de la biblioteca, mostrando la información de cada material bibliotecario.

## Descripción de Clases

- `material_bibliotecario`: Clase padre abstracta que representa material bibliotecario. Tiene miembros como identificador, fecha de adquisición, disponibilidad y título. Además, tiene un método virtual puro `mostrarInfo()` que debe ser implementado por las clases derivadas.
- `biblioteca`: Clase que representa una biblioteca. Contiene un vector de punteros a `material_bibliotecario` para almacenar su contenido. Tiene métodos para inicializar la biblioteca con materiales predefinidos y para imprimir el contenido.
- `libro`: Clase derivada de `material_bibliotecario` que representa un libro. Tiene miembros adicionales como autor, género y año de publicación. Implementa el método `mostrarInfo()` para imprimir la información específica del libro.
- `revista`: Clase derivada de `material_bibliotecario` que representa una revista. Tiene miembros adicionales como editor, editorial y volumen. Implementa el método `mostrarInfo()` para imprimir la información específica de la revista.

## Posibles problemas

- El código actual no maneja la liberación de memoria para los materiales bibliotecarios almacenados en el vector `contenido` de la clase `biblioteca`. Es importante liberar la memoria adecuadamente para evitar fugas de memoria.
- No se implementan métodos para agregar o eliminar materiales bibliotecarios en tiempo de ejecución. El contenido de la biblioteca se inicializa en el constructor de `biblioteca`, por lo que no se pueden realizar modificaciones dinámicamente.
- No se realiza ninguna validación de entrada en los constructores y métodos, lo que puede llevar a errores si los datos ingresados no son válidos.

## Requisitos previos

Para compilar y ejecutar el código, se requiere un compilador de C++ compatible con C++11 o superior.

## Descarga y ejecución en Windows y Linux

1. Descarga el código fuente de la biblioteca virtual en un archivo con extensión `.cpp` o copia el código en un nuevo archivo con extensión `.cpp` en tu sistema.

2. Abre una terminal o línea de comandos.

3. Navega hasta el directorio donde se encuentra el archivo `.cpp` de la biblioteca virtual.

4. Compila el código usando el siguiente comando en la terminal:

   ```bash
   g++ main.cpp
   ```

   Este comando asume que tienes instalado un compilador de C++ compatible.

5. Una vez compilado correctamente, ejecuta el programa con el siguiente comando:

   - En Windows:

     ```bash
     ./main.exe
     ```

   - En Linux:

     ```bash
     ./main
     ```

   El programa imprimirá el contenido de la biblioteca en la terminal.

¡Ahora puedes disfrutar de la biblioteca virtual y explorar los materiales bibliotecarios almacenados en ella!
