#include <iostream>
#include <cmath>
#include <vector>

int main (void)
{
  int array1[10] = {0};
  for (int ii = 0; ii < 10; ii++){
    std::cout << array1[ii]<< "\t";
  }
  std::cout << "\n";
  
  //----------------------------------------------
  int array2[15] = {0};
  for (int ii = 0; ii < 15; ii++){
    array2[ii] = 15;
  }
  
  for (int ii = 0; ii < 15; ii++){
    std::cout << array2[ii]<< "\t";
  }
   std::cout << "\n";
   
  //----------------------------------------------

   double monthlytemperatures[12] = {0};
   for (int ii = 0; ii < 12; ii++){
     std::cin >>  monthlytemperatures[ii];
   }
  
   for(int ii = 0; ii < 12; ii++){
     std::cout << monthlytemperatures[ii] << "\t";
   }

   std::cout << "\n";
   //---------------------------------------------

   int bestscores [5] = {1, 4, 2, 43, 234};

   for(int ii = 0; ii < 5; ii++){
     std::cout << bestscores [ii] << std::endl;
   }
}
