#include <iostream>
#include <vector>

void Mmult (std::vector<int> M1, std::vector<int> M2, int n, int m, int p, std::vector <int> &Mm);

int main (void)
{
  const int N = 10;
  const int M = 10;
  const int P = 10;
  std::vector <int> ma1(M*N);
  std::vector <int> ma2(N*P);
  std::vector <int> mar(M*P);
  
  //ma1
 
  for (int ii = 0; ii < M; ii++){
    for (int jj = 0; jj < N; jj++){
      ma1[ii*N+jj] = 1;
    }
  }

    for(int ii = 0; ii < M; ii++){
    for (int jj = 0; jj < N; jj++){
      std::cout << ma1[ii*N+jj] << "\t";
    }
    std::cout << "\n";
  }
     std::cout << "\n";  std::cout << "\n";
  
  //ma2


   for (int ii = 0; ii < N; ii++){
    for (int jj = 0; jj < P; jj++){
      ma2[ii*P+jj] = 1;
    }
  }
   for(int ii = 0; ii < N; ii++){
     for (int jj = 0; jj < P; jj++){
       std::cout << ma2[ii*P+jj] << "\t";
     }
     std::cout << "\n";
   }
    std::cout << "\n";  std::cout << "\n";

   //mar
    Mmult (ma1, ma2, N, M, P, mar);
   /*for (int ii = 0; ii < M; ii++){
    for (int jj = 0; jj < P; jj++){
      mar[ii*P+jj] = 1;
    }
  }*/
   for(int ii = 0; ii < M; ii++){
     for (int jj = 0; jj < P; jj++){
       std::cout << mar[ii*P+jj] << "\t";
     }
     std::cout << "\n";
     }
   
}


void Mmult (std::vector<int> M1, std::vector<int> M2, int n, int m, int p, std::vector <int> &Mm)
{
  
  for (int ii = 0; ii < m; ii++){
    for (int jj = 0; jj < p; jj++){
      for (int aa = 0; aa < n; aa++){
	     Mm[ii*p+jj] += M1[ii*n+aa]*M2[aa*p+jj];
      }
    }
  }
  }
