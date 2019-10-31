#include <iostream>
#include <cmath>
#include <vector>
#include <string>

void datos (int n_notas);
 struct Estudiante
  {
    std::string name = "Pedro";
    std::string id = "234567";
    //   double notas[10] = {0};
    //int n_notas = 0;
 };

int main (void)
{
  const int n_notas = 10;
  std::vector <double> notas;

  Estudiante uno {"Diana", "1293546837"};  
    // uno.name = "Diana";
    //uno.id = "1214257623";
  //std::vector <double> uno.notas [n_notas] = {4.5, 3.5, 5.0, 3.8, 4.3, 4.0, 3.6, 4.1, 4.4, 4.7};
  
  std::cout << uno.name << std::endl;
  std::cout << uno.id << std::endl;
  
}


	  
