#include <stdio.h>
#include <stdlib.h>
int main()
{
  int A;
  double B, C;
  while (1)
  {

    scanf("%d %lf %lf", &A, &B, &C);

    if (A == 0 && B == 0 && C == 0)
    {
      break;
    }
    printf("%d %.2f\n", A, (B * C));
    getchar();
  }

  return 0;
}