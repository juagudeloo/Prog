//Para organizar de menor a mayor.

#include <iostream>

int main (void)

{
  int x {0};
  int y {0};
  int z {0};

  std::cout << "Escriba tres números enteros:\n";
  std::cin >> x;
  std::cin >> y;
  std::cin >> z;

  //----------------------------------------------------------------
  
  if (x<=y && x<=z)
    {
      if (y<z)
	{
	  std::cout << "Su orden de mayor a menor es: " << x << ", " << y << ", " << z << "\n";
	}
      else
	{
	  std::cout << "Su orden de mayor a menor es: " << x << ", " << z << ", " << y << "\n";
	}
    }
  
  //----------------------------------------------------------------
  
   if (y<x && y<=z)
    {
      if (x<z)
	{
	  std::cout << "Su orden de mayor a menor es: " << y << ", " << x << ", " << z << "\n";
	}
      else
	{
	  std::cout << "Su orden de mayor a menor es: " << y << ", " << z << ", " << x << "\n";
	}
    }

    //----------------------------------------------------------------

      if (z<x && z<y)
    {
      if (x<y)
	{
	  std::cout << "Su orden de mayor a menor es: " << z << ", " << x << ", " << y << "\n";
	}
      else
	{
	  std::cout << "Su orden de mayor a menor es: " << z << ", " << y << ", " << x << "\n";
	}
    }

      //----------------------------------------------------------------
   
      return 0;
      
}
