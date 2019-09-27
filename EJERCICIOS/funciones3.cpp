//Realiza la división entre dos variables enteras que ingrese, y regresa un resultado flotante.

#include <iostream>

//DECLARACIÓN

double division(double a, double b); 

//FUNCIÓN PRINCIPAL

int main(void)
{
  double m {0};
  double n {0};
  double r {0};

  std::cout << "Ingrese dos números:\n";
  std::cin >> m;
  std::cin >> n;
  r = division(m,n);
    
  std::cout << "The result of the division between those two vallues are: " << r << "\n";

  return 0;
}

//IMPLEMENTACIÓN

double division(double a, double b)
{
  double d {0};
  d = a/b;
  return d;
}
