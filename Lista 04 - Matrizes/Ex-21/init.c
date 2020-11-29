#include <stdio.h>

int main()
{

  const int DADOS[7][7] = {{0, 63, 210, 190, -1, 190}, {63, 0, 160, 150, 95, 10}, {210, 160, 0, 10, 1, 10}, {190, 150, 10, 0, 10, 20}, {10, 95, 7, 21, 0, 80}, {190, 2, -1, 41, 80, 0}};
  int i;
  int N;
  int sum = 0;
  int route[101];
  int whereIs;
  scanf("%d", &N);
  for (i = 0; i < N; i++)
  {

    scanf("%d", &route[i]);
    if (i == 0)
    {
      whereIs = route[0];
    }
  }

  for (i = 0; i < N; i++)
  {
    if (DADOS[whereIs][route[i]] == -1)
    {
      printf("rota invalida!\n");
      return 0;
    }
    sum += DADOS[whereIs][route[i]];
    whereIs = route[i];
  }
  printf("%d\n", sum);
  return 0;
}