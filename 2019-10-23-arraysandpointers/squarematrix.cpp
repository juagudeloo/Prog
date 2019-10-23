//ESTE C�DIGO SOLO HALLA LA TRANSPUESTA DE MATRICES CUADRADAS.

#include <iostream>

const int M = 5, N = 5;
void print (int M[][N], int m, int n);

int main (void)
{
  //declarar las matrices
  
  
  int A [M][N] = {{0}};
  int AT [N][M] = {{0}};
  int ii, jj;
  
  for (ii=0; ii < M;++ii){
    for (jj=0; jj < N; ++jj){
	A[ii][jj] = ii*N + jj;
      }
  }

  std::cout << "# Original Matrix: \n";
    for (ii=0; ii < M;++ii){
    for (jj=0; jj < N; ++jj){
	std::cout << A[ii][jj] << "   ";
      }
    std::cout << std::endl;
  }
  
  
    //procesarla : transponerla

  for (ii=0; ii < M;++ii){
    for (jj=0; jj < N; ++jj){
	AT [jj][ii] = A[ii][jj];
      }
  }


  //imprimirla

  std::cout << "# Transposed Matrix: \n";
   print (AT, N, M);   
   std::cout << "\n";

     
  return 0;
}

void print (int M[][N], int m, int n)
{
    int ii, jj;
    for (ii=0; ii < m;++ii){
    for (jj=0; jj < n; ++jj){
	std::cout << M[ii][jj] << "   ";
      }
    std::cout << std::endl;
  }
}
