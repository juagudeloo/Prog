#include <iostream>

int main (void)
  
{
  double val1 {0.0};
  double val2 {0.0};
  double x {0.0};
  
  std::cout << "Escribe un n�mero entero (V1):\n";
  std::cin >> val1;
  std::cout << "Escribe otro n�mero entero (V2):\n";
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

  //multiplicaci�n
  x = val1*val2;
    std::cout << "MULTIPLICACI�N:\n" << x << "\n";
  std::cout << "\n";

  //divisi�n (Puse n�meros flotantes en vez de enteros porque no me permit�a realizar la divisi�n)
  x = val1/val2;
    std::cout << "DIVISI�N:\n" << x << "\n";
  std::cout << "\n";
  return 0;
}


