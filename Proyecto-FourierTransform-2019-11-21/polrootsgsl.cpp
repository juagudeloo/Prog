#include <iostream>
#include <stdio.h>
#include <gsl/gsl_poly.h>

int main(void)
{
  double a = 1, b = 2, c = 1, X0 = 0, X1 = 1;
  
  gsl_poly_solve_quadratic(a, b, c, X0, X1)

    std::cout << X0 << "\n"
	      << X1 << std::endl;
  return 0;
}
