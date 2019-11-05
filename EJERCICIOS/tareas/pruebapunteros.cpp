#include <iostream>

int main(void)
{
  int main() {
  
  char a = 'a';
  char *n = &a;
  int array1 [10] = {0};
  int * ptrarray = array1;
  char b[8] = {'a'};
  char *ptrcharray = b;

  const int m = 0;
  int * ptrerror = &m; //ESTA PARTE TE VA A COMPILAR ERROR, PORQUE NO PUEDES DECLARAR UN PUNTERO, CON EL QUE PUEDES CAMBIAR EL VALOR DE UNA VARIABLE, A UNA VARIABLE QUE DECLARASTE ¡CONSTANTE! (para que te compile, conviértelo en un comentario).  
  
  const int c = 0;
  const int *ptrcons=&c;
  int d = 0;
  const int *ptrint =&d;
  
  return 0;
}
