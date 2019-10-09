//Halla el máximo de dos valores con funciones.

#include <iostream>

int max(int a, int b);
double max(double a, double b);

int main(void)
{ 
  std::cout << max (2,4) << std::endl;
  std::cout << max (2.5, -4) << std::endl;
  return 0;
}



int max(int a, int b)
{
  if (a<b)
    {
      return b; // En vez de poner \"std::cout....\" se puede poner directamente el \return/ para que muestre específicamente el valor de la variable.1
    }
  else
    {
      return a;
    }
}


double max(double a, double b)
{
  if (a<b)
    {
      return b; // En vez de poner \"std::cout....\" se puede poner directamente el \return/ para que muestre específicamente el valor de la variable.1
    }
  else
    {
      return a;
    }
}
