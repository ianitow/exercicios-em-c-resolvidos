#include <stdio.h>

unsigned long int fatorial(unsigned int n)
{
  unsigned long int f = 1;
  while (n > 1)
  {
    f *= n--;
  }
  return f;
}

int main(void)
{
  unsigned int num;
  scanf("%u", &num);
  printf("%d! = %lu\n", num, fatorial(num));
  return 0;
}