//El código que yo estaba desarrollando

#include <iostream>
#include <cmath>

double dif_forward_richardson (double x, double h);
double dif_central (double x, double h);
double dif_forward (double x, double h);
double fun (double a);

int main (void)
{

  double x = M_PI;
  double h = 0.1;

  std::cout << x << "\n"
	    << h << "\n"
	    << dif_forward (x,h) << "\n"
	    << dif_central (x,h) << "\n"
	    << dif_forward_richardson (x, h) << "\n";
  return 0;
}


double dif_forward_richardson (double x, double h)
{
  double result1 = dif_forward (x, h);
  double result2 = dif_forward (x, h/2);

    return (4*result2 - result1)/3;
}
	  

double dif_central (double x, double h)
{
  return (fun(x+h/2)  - fun(x-h/2))/h; 
}


double dif_forward (double x, double h)
{
  return (fun(x+h) - fun(x))/h;
}
  

double sine (double x)
{
  return std::sin (x);
}

