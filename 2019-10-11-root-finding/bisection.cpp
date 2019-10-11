//HECHO POR MÍ;

#include <iostream>
#include <cmath>

using fptr = double (double)  
  
  double bisection (double xl, double xu, double eps, fptr fun);

int main (void)
{
  const double EPS = 1.0e-6
    double root = bisection (100, 200, EPS, f);
  std::cout << root << "\n";
  
}

double bisection (double xl, double xu, double eps, fptr fun)
{
  double xr = xl;
  do{
    xr = (xl+xu)/2
      if (std::fabs(f(xr)) <= eps) {
				    break;
      }
      else if (f(xr)*f(xl)<0) {
			       xu = xr;
      }
    
      else {
	    xl=xr;
      }
    
    
    if (fun(xl)*fun(xr)<0) return xu=xr;
    
    else xl=xr;
  }
}

double f (double x)
{
  return x+10-x*std::cosh(50.0/x);
}
