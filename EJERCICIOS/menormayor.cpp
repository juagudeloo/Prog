//Para organizar de menor a mayor.

#include <iostream>

int main (void)

{
  int x {0};
  int y {0};
  int z {0};

  std::cout << "Escriba un número entero:\n";
  std::cin >> x;
  std::cout << "Escriba un número entero:\n";
  std::cin >> y;
  std::cout << "Escriba un número entero:\n";
  std::cin >> z;

  //----------------------------------------------------------------
  
  if (x<=y && x<=z)
    {
      if (y<z)
	{
	  std::cout << x << ", " << y << ", " << z << "\n";
	}
      else
	{
	  std::cout << x << ", " << z << ", " << y << "\n";
	}
    }
  
  //----------------------------------------------------------------
  
   if (y<=x && x<=z)
    {
      if (x<z)
	{
	  std::cout << y << ", " << x << ", " << z << "\n";
	}
      else
	{
	  std::cout << y << ", " << z << ", " << x << "\n";
	}
    }

    //----------------------------------------------------------------

      if (z<=x && z<=y)
    {
      if (x<y)
	{
	  std::cout << z << ", " << x << ", " << y << "\n";
	}
      else
	{
	  std::cout << z << ", " << y << ", " << x << "\n";
	}
    }

      //----------------------------------------------------------------
   
      return 0;
      
}
