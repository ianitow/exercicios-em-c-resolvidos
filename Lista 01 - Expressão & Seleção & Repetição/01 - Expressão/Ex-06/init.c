#include <stdio.h>
int main()
{
  float a, b, media;
  scanf("%f %f", &a, &b);
  media = (a + b) / 2;
  printf("%.3f\n", media);
  return 0;
}