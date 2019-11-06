#include <iostream>
#include <Eigen/Dense>

int main (void)
{
  Eigen::MatrixXi m(3,2);

  m << 2, 4
    5, 6,
    7, 8;

  std::cout << m << std::endl;
}
