//Te indica si un número es divisible por tres.

#include <iostream>

int main (void)

{
  int a {0};

  std::cout << "Escriba un número entero: \n";
  std::cin >> a;
  
  if (a%3 == 0)
    {
      std::cout << "Es un número divisible por 3\n";
    }
  else
    {
      std::cout << "No es divisible por 3\n";
    }
  
  return 0;
}
      
