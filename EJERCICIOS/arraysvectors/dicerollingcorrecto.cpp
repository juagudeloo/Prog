#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>

int main (void)
{
  const int n_car = 6;
  const int n_lan = 36000;
  std::vector <int> dice1;
  dice1 = {1, 2, 3, 4, 5, 6};
  std::vector <int> dice2;
  dice2 = {1, 2, 3, 4, 5, 6};
  int resultados [n_car+1][n_car+1] {{0}};
  int suma [2][11] {{0}};
  srand (time(0));

  for (int ii = 0; ii< 11; ii++){
    suma[0][ii] = ii+2;
  }

  for (int ii = 1; ii<=n_lan; ii++){
    int a = rand() % 6;
    int b = rand() % 6;
    suma[1][dice1[a]+dice2[b]-2] += 1;
    resultados[a+1][b+1] += 1;
  }

  for (int jj = 0; jj < n_car; jj++){
    resultados[0][jj+1] = dice1[jj];
  }
  for (int ii = 0; ii < n_car; ii++){
    resultados[ii+1][0] = dice2[ii];
  }
    

  std::cout << "Frecuencia con la que aparece cada suma: " << std::endl;

  for (int ii = 0; ii < 2; ii++){
    for (int jj = 0; jj < 11; jj++){
      std::cout << suma[ii][jj] << "\t";
    }
    std::cout << "\n";
  }

  std::cout << "\n"<< "Frecuencia con la que aparece cada combinación: " << std::endl;
  
  for (int ii = 0; ii < n_car; ii++){
    for (int jj = 0; jj < n_car; jj++){
      std::cout << resultados[ii][jj] << "\t";
    }
    std::cout << "\n";
  }
}
