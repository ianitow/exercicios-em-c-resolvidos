#include <stdio.h>
#include <math.h>
int main()
{
  int N, i;
  double sum;
  scanf("%d", &N);
  if (N >= 2 && N <= 1000)
  {
    double coordsX[N];
    double coordsY[N];
    double coordsZ[N];

    for (i = 0; i < N; i++)
    {
      scanf("%lf", &coordsX[i]);
      scanf("%lf", &coordsY[i]);
      scanf("%lf", &coordsZ[i]);
    }
    sum = coordsX[0];
    for (i = 1; i < N; i++)
    {

      sum -= coordsX[i];
    }
    printf("%.2lf\n", fabs(sum));
    sum = coordsY[0];
    for (i = 1; i < N; i++)
    {

      sum -= coordsY[i];
    }
    printf("%.2lf\n", sum);
    sum = coordsZ[0];
    for (i = 1; i < N; i++)
    {

      sum -= coordsZ[i];
    }
    printf("%.2lf\n", fabs(sum));
  }
  return 0;
}