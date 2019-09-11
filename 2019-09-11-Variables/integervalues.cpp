#include <iostream>

int main (void)
  
{
  double val1 {0.0};
  double val2 {0.0};
  double x {0.0};
  
  std::cout << "Escribe un número entero (V1):\n";
  std::cin >> val1;
  std::cout << "Escribe otro número entero (V2):\n";
  std::cin >> val2;
  std::cout << "\n";

  //mayor o menot
  if (val1 < val2)
    {
      std::cout << "V1 es menor que V2";
    }
  else
    {
      std::cout << "val2 es menor que val1";
    }
 
  std::cout << "\n"; 
  std::cout << "\n";
  
  //suma
  x = val1+val2;
  std::cout << "SUMA:\n" << x << "\n";
  std::cout << "\n";
  
  //diferencia
  x = val1-val2;
  std::cout << "DIFERENCIA (V1-V2):\n" << x << "\n";
  std::cout << "\n";

  //multiplicación
  x = val1*val2;
    std::cout << "MULTIPLICACIÓN:\n" << x << "\n";
  std::cout << "\n";

  //división (Puse números flotantes en vez de enteros porque no me permitía realizar la división)
  x = val1/val2;
    std::cout << "DIVISIÓN:\n" << x << "\n";
  std::cout << "\n";
  return 0;
}


