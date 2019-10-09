//Adaptado por mí.

#include <iostream>
#include <cmath>

using fptr /* fptr es solo un nombre que se le da. Esto nos ayuda a hacer un puntero a una función*/ = double (double); 

double f (double x);
double trapezoid (double h, double x0, double xn, fptr fun);

int main (void)
{

  std::cout.precision(16); std::cout.setf(std::ios::scientific);
  
  const double H = 0.01;
  std::cout << trapezoid (H, 0.0, 2*M_PI, f) << std::endl;

  return 0;
}


double f (double x)
{
  return std::sin(x);

}

double trapezoid (double h, double x0, double xn, fptr fun)
{
  double sum {0.0};
  int n = (xn-x0)/h;
  double x {0.0};
  for (int ii = 1; ii <= n-1; ii++){
    x = x0 + ii*h;
    sum += 2*fun(x);
  }

  sum += fun(x0) + fun(xn);

  return sum*h/2;
    }

	 
