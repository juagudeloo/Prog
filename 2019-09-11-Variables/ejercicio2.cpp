#include <iostream>

int main (void)
  
{
  double miles {0.0};
  double km {0.0};
  std::cout << "write the value in miles : \t";
  std::cin >> miles;
  km=miles*1.609;
    std::cout << "Convertion to kilometers:\t" << km << "km\n";
  
  return 0;
  
}
