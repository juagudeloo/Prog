#include <iostream>

//template <typename T>
//T max(T a, T b)

/*Esto lo que hace es que T toma un tipo de valor double,int, 
  char, etc., dependiendo del valor que se inserte 
  (ej: 3.2 - double, 4 - int]).El problema es que T solo puede 
  convertirse en un tipo de valor al tiempo, con convertirse 
  en un tipo de valor al tiempo, con  lo cual no  puede resolver 
  programas con variables mixtas (Ej: double-int, int-double).*/

template <typename T, typename S>
T max(T a,  S b)
{
T result = 0;
  if ( a >= b )
    {
    result = a;
  }
  else {
    result = b;
  }
  return result;
}

int main(void)
{
  std::cout << max(-3.2, -3.5) << "\n";
  std::cout << max(2, -5) << "\n";
  std::cout << max(1.1, -7) << "\n"; 
  return 0;
}

