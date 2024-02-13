#include <stdio.h>
#include <stdlib.h>

int main(){
  int a,b,c;
  char d;
  char e = 'e';
  d = e;
  int f = 1;
  c = f;
  a = 2;
  b = a + c;
  float g = 3.14;
  double h = 3.14159;
  printf("%d%c%f%lf",b,d,g,h);
  return 0;
}
