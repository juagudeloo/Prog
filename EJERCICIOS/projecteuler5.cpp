#include <iostream>
#include <cmath>
#include <vector>

int main (void)
{
  const int N = 10;
  int divisibles[N] = {0};
  // std::vector<int> divisibles(N);
  int n = 0;
  for (int ii = 1; ii<=1000000; ii++){
    int sum = 0;
    for (int jj = 1; jj<=10; jj++){
      sum += ii%jj;
      //if (sum =! 0) break;
    }

    // std::cout << sum << std::endl;
    if (sum == 0){
      divisibles[n++] = ii;
      //  std::cout << ii << std::endl;
      }
    if (n==10) break;
  }
  for (int ii = 0; ii<N; ii++){
    std::cout << divisibles [ii] << std::endl;
  }

  //  std::cout << std::min_element(std::begin(divisibles), std::end(divisibles)) << std::endl;
}
	
	
	
	
