//Este es el del profesor, descargado desde uno de sus repositorios para mostrar lo que se puede hacer en caso de que necesite adelantarme.


#include <iostream>

int max(int a, int b);
double max(double a, double b); // overloaded function

int main(void)
{
  std::cout << max(-3.2, -3.5) << "\n";
  std::cout << max(2, -5) << "\n";
  //std::cout << max(1.1, -7) << "\n"; // error, no hay funcion sobre cargada para esta combinacion
  
  return 0;
}

int max(int a, int b)
{
  int result = 0;
  if ( a >= b ) {
    result = a;
  }
  else {
    result = b;
  }
  return result;
}

double max(double a, double b)
{
  double result = 0;
  if ( a >= b ) {
    result = a;
  }
  else {
    result = b;
  }
  return result;
}
