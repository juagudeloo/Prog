//Realizo una suma con variables ya asignadas a partir de una función.

#include <iostream>;

//DECLARACIÓN
int suma(int a, int b);

//PROGRAMA PRINCIPAL

int main (void)
{
  int s {0};
  s = suma(4,5);
    std::cout << "Your result is: " << s << "\n";  
}

//IMPLEMENTACIÓN

int suma(int a, int b)
{
  int r {0};
  r= a+b;
    return r;
}

