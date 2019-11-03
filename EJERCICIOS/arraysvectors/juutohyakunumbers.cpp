//Este programa lee 20 números que se escriban e imprime solo aquellos que estén entre el 10 y el 100.

#include <iostream>
#include <vector>
#include <cmath>

int diffrombef (int a, int array[]);
int isintheinterval (int a, int array[]);
void error (void);

int main (void)
{
  const int N = 20;
  int array [N] = {0};
  int read [N] = {0};

  std::cout << "ESCRIBA 20 NÚMEROS" << std::endl;
  for (int ii = 0; ii < N; ii++){
      std::cin >> array[ii];
  }
  std::cout << "\n";
  
  for (int ii = 0; ii < N; ii++){
    
    if(ii==0) read[0]=array[0];
    
    if(ii>0){
      if (diffrombef (ii, array)){
	  read[ii] = array[ii];
	}
	else read[ii]=0;
      }
    }


  if (isintheinterval(N, read)){
  std::cout << "Los números ingresados entre 10 y 100 son: " << std::endl;
  for (int ii = 0; ii < N; ii++){
    if(read[ii]>=10 and read[ii]<=100){
      std::cout << read [ii] << "\t";
    }
  }
  }

  else error ();
  std::cout << "\n";
}

//------------------------------------------------------------------------

int diffrombef (int a, int array[])
{
  int sum = 0;
  for (int ii = 0; ii < a; ii++){
    if (array[ii]==array[a]) sum++;
    if (sum>1) break;
  }

  if (sum == 0) return 1;
  if (sum > 0) return 0;
}

int isintheinterval (int a, int array[])
{
    int sum = 0;
  for (int ii = 0; ii < a; ii++){
    if (array[ii]>=10 and array[ii]<=100) sum++;
  }

  if (sum == 0) return 0;
  if (sum > 0) return 1;
}


void error (void)
{
  std::cerr << "No ingreso ningún número en el intervalo del 10 al 100" << std::endl;
}

    


