//Te indica si un n�mero es divisible por tres.

#include <iostream>

int main (void)

{
  int a {0};

  std::cout << "Escriba un n�mero entero: \n";
  std::cin >> a;
  
  if (a%3 == 0)
    {
      std::cout << "Es un n�mero divisible por 3\n";
    }
  else
    {
      std::cout << "No es divisible por 3\n";
    }
  
  return 0;
}
      
