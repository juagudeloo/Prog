//Realizo una suma con variables que se pueden ingresar, a partir de una función.

#include <iostream>;

//DECLARACIÓN
int suma(int a, int b);

//PROGRAMA PRINCIPAL

int main (void)
{
  int s {0};
  int m {0};
  int n {0};

  std::cout << "Ingrese dos valores enteros:\n"; 
  std::cin >> m;
  std::cin >> n;
  s = suma(m,n);
    std::cout << "Your result is: " << s << "\n";  
}

//IMPLEMENTACIÓN

int suma(int a, int b)
{
  int r {0};
  r= a+b;
    return r;
}
