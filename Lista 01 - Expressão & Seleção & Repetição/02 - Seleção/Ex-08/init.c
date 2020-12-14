#include <stdio.h>
int main()
{
  int x, y;
  scanf("%d", &x);
  if (x < 1)
    y = x;
  if (x == 1)
    y = 0;
  if (x > 1)
    y = x * x;
  printf("Y = %d\n", y);
  return 0;
}