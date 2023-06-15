```yaml
nombre: Ezzat Alzahouri C. 
matricula: A01710709. 
proyecto: Sistema de Gestión de Biblioteca
```

# Sistema de Gestión de Biblioteca
El proyecto "Biblioteca" es una implementación de un sistema de gestión de materiales bibliotecarios en C++. El programa utiliza clases y herencia para representar diferentes tipos de materiales, como libros y revistas, y permite realizar operaciones como ver el contenido, mostrar el contenido disponible y agregar nuevo contenido. La clase principal es "Biblioteca", que contiene un vector de punteros a objetos de la clase base "MaterialBibliotecario". Cada objeto de material bibliotecario tiene atributos como ID, fecha de adquisición, disponibilidad y título. El proyecto muestra cómo estructurar y manipular objetos relacionados y utilizar polimorfismo para tratar diferentes tipos de materiales de manera uniforme.

## Características

- La biblioteca virtual puede contener libros y revistas.
- Cada material bibliotecario tiene un identificador único, fecha de adquisición, disponibilidad y título.
- Los libros tienen información adicional como autor, género y año de publicación.
- Las revistas tienen información adicional como editor, editorial y volumen.
- La biblioteca se inicializa con algunos libros y revistas predefinidos.
- Se puede imprimir el contenido de la biblioteca, mostrando la información de cada material bibliotecario.

## Descripción de Clases

- `material_bibliotecario`: Clase padre abstracta que representa material bibliotecario. Tiene miembros como identificador, fecha de adquisición, disponibilidad y título. Además, tiene un método virtual puro `mostrarInfo()` que debe ser implementado por las clases derivadas.
- `biblioteca`: Clase que representa una biblioteca. Contiene un vector de punteros a `material_bibliotecario` para almacenar su contenido. Tiene métodos para inicializar la biblioteca con materiales predefinidos y para imprimir el contenido, contenido Disponible y agregar objetos.
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

## Cambios importantes
1. Se cambio de manera importante la estructura del codigo y la logica del UML, se elimino la clase usuario de las primeras versiones y se incorporo la clase revista, de esta manera se pudieron implementar temas como el uso de Sobrecarga y sobrescritura, y dejar más clara la parte de herencia y polimorfismo.
2. En versiones anteriores se usaba un array para guardar los objetos, pero para facilitar el uso y manipulacion del contenido se integro en un vector.
3. Con el uso de dynamic cast pudimos integrar una manera más efectiva para recorrer el vector y poder imprimir que tipo de objeto es cada muestra.
4. Se incorporo el uso de archivos .h para poder tener más organizado el código.
5. Finalmente se incorporo documentación necesaria para tener mayor entendimiento del codigo.
