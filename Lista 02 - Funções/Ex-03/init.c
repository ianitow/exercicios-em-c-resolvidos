#include <stdio.h>

unsigned long int invertenum(int t1)
{
  int invertido;
  invertido = (t1 % 10) * 100 + ((t1 % 100) / 10) * 10 + t1 / 100;

  return invertido;
}

int main(void)
{
  unsigned int t1;
  scanf("%u", &t1);
  printf("%lu\n", invertenum(t1));
  return 0;
}