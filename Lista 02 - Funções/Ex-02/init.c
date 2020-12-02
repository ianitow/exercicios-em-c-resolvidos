#include <stdio.h>

unsigned long int fibonacci(int t1, int t2, int n)
{

  int i = 1;
  int next = t1 + t2;
  for (i = 4; i <= n; i++)
  {
    t1 = t2;
    t2 = next;
    next = t1 + t2;
  }
  return next;
}

int main(void)
{
  unsigned int t1, t2, num;
  scanf("%u %u %u", &t1, &t2, &num);
  printf("%lu\n", fibonacci(t1, t2, num));
  return 0;
}