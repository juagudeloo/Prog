#include <iostream>
#include <vector>

const int NREADS = 20;
const int MIN = 10;
const int MAX = 100;

int main (void)
{
  //declarr arreglo
  std::vector<int> numbers;

  int num;
  //leer NREADS
  //veridificar que lo leído no esté en el arreglo. En ese caso, guardar.
  for (int iread = 0; iread < NREADS; ++iread){
    std::cin >> num;
    if (10<= num an num <=100) {
      bool inarray = false;
      for(const auto & val : numbers) {
	if (val == num){
	  inarray = true;
	  break;
	}
      }
      if (false == inarray){
	numbers.push_back(num); //#nameofthevector#.push_back(#nameoftheenteredvalue#) envía el valor ingresado al final del arreglo.
      }
    }
  }
}
	
  
