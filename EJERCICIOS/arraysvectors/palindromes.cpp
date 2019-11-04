#include <iostream>
#include <string>

void testpalindrome (std::string a, std::string b);

int main (void)
{
  std::string fstring = "esto es alibaba";
  std::string sstring = "4babila se otse";
  
  std::cout << "INGRESE DOS ORACIONES PARA AVERIGUAR SI SON PALINDROMOS (para cambiar de oración, oprima \"enter\")" << std::endl;
  
  std::getline(std::cin, fstring);
  std::getline(std::cin, sstring);
  
  testpalindrome (fstring, sstring);
}

//////////////////////////////////////////////////////////////////////////////
void testpalindrome (std::string a, std::string b)
{
  if (a.length()!=b.length()) std::cout << "THE SENTENCES DOESN'T HAVE THE SAME LENGTH" << std::endl;
  
  int sum = 0;
  if (a.length() == b.length()){
    for (int ii = 0; ii < a.length(); ii++){
      if (a[ii]==b[b.length()-1-ii]) sum++;
    }
    if ((sum == a.length())) std::cout << "THEY ARE PALINDROME" << std::endl;
    if ((sum != a.length())) std::cout << "THEY ARE NOT PALINDROME" << std::endl;
  }
}
