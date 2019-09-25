#include <iostream>

void  helloworld (int m);

int main (void)
{
  int m (0);
    
  helloworld(m);
    return 0;
  
}

void  helloworld (int m) 
{
  m = 35;
  std::cout << "hello world fromm a function!\n" << m << "\n";
}


