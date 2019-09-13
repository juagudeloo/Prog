// Archivo de ingresar un nombre

#include <iostream>
#include <string>

int main (void)

{
  std::string name =  "Sebastian";

  std::cout << "Escriba su nombre: " << "\n";
  std::cin >> name;
  std::cout << "¡Hola, " << name << "!" << "\n";

  return 0;

}
  
