//It converts spell-out numbers into digits (only for 0, 1, 2, 3, 4)

#include <iostream>
#include <string>

int main (void)
  
{
  std::cout << "Spell-out an integer number (hint: it must be in the gap from 0 to 4):\n";
  
  std::string val1 = "hola"; 
  std::cin >> val1;
  
  if (val1 == "zero" ^ val1 == "one" ^ val1 == "two" ^ val1 == "three" ^ val1 == "four")
    
    {
      if (val1 == "zero")
	
	std::cout << "0\n";
      
      if (val1 == "one")
	
	std::cout << "1\n";
      
      if (val1 == "two")
	
	std::cout << "2\n";
      
      if (val1 == "three")
	
	std::cout << "3\n";
      
      if (val1 == "four")
	
	std::cout << "4\n";
    }
  
  else
    {
      std::cout << "Not a number I know";}

  return 0;

}
    
