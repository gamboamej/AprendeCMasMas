 // Programa que muestra diversos textos por consola

 // Las librerías del sistema usadas son las siguientes
 #include <iostream>

 // Función: main
 // Recibe: void
 // Devuelve: int
 // Es la función principal encargada de mostrar por consola diferentes textos
 int main(void)
 {
   // Ejemplo con una única línea, se muestra el uso de std::cout y std::endl
   std::cout << "Bienvenido. Soy un programa. Estoy en una linea de codigo." << std::endl;

   // Ejemplo con una única línea de código que se puede fraccionar mediante el uso de '<<'
   std::cout << "Ahora " 
   << "estoy fraccionado en el codigo, pero en la consola me muestro como una unica frase." 
   << std::endl;

   // Uso de un código largo, que cuesta leer para un programador, y que se ejecutará sin problemas.
   // *** No se recomienda hacer líneas de esta manera, esta forma de programar no es apropiada ***
   std::cout << "Un gran texto puede ocupar muchas lineas." 
   << std::endl 
   << "Pero eso no frena al programador a que todo se pueda poner en una unica linea de codigo y que" 
   << std::endl 
   << "el programa, al ejecutarse, lo situe como el programador quiso" 
   << std::endl;

   return 0; // Y se termina con éxito.
 }