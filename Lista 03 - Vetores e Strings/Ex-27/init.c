#include <stdio.h>
#include <math.h>
int main()
{
  int N, i, j;
  int max;

  scanf("%d", &N);
  if (N >= 2 && N <= 1000)
  {
    double coordsX[N];
    double coordsY[N];
    double coordsZ[N];
    double max;
    double sum;

    for (i = 0; i < N; i++)
    {
      scanf("%lf", &coordsX[i]);
      scanf("%lf", &coordsY[i]);
      scanf("%lf", &coordsZ[i]);
    }
    for (i = 0; i < N; i++)
    {

      if (i + 1 < N)
      {
        double sumX = fabs(coordsX[i + 1] - coordsX[i]);
        double sumY = fabs(coordsY[i + 1] - coordsY[i]);
        double sumZ = fabs(coordsZ[i + 1] - coordsZ[i]);
        double maior = -1002;
        if ((sumX >= sumY) && (sumX >= sumZ))
        {
          maior = sumX;
        }
        else if ((sumY >= sumX) && (sumY >= sumZ))
        {
          maior = sumY;
        }
        else if ((sumZ >= sumX) && (sumZ >= sumY))

        {
          maior = sumZ;
        }
        printf("%.2lf\n", maior);
      }
    }
    }
  return 0;
}