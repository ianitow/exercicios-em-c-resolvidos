#include <stdio.h>

int oftenOccurs(int *elements, int el)
{
  int i, ocurrence = 0;
  for (i = 0; elements[i] != -1; i++)
  {
    if (elements[i] == el)
      ocurrence++;
  }
  return ocurrence;
}
int main()
{
  int N, i, value;
  int maiorValor = -1, qntdOcorre = -1;

  scanf("%d", &N);
  if (N >= 1 || N <= 1000000)
  {
    int V[N];
    for (i = 0; i < N; i++)
    {
      scanf("%d", &value);
      V[i] = value;
    }
    V[i] = -1;

    for (i = 0; i < N; i++)
    {
      if (oftenOccurs(V, V[i]) > qntdOcorre)
      {
        maiorValor = V[i];
        qntdOcorre = oftenOccurs(V, V[i]);
      }
      else if (oftenOccurs(V, V[i]) == qntdOcorre)
      {
        if (maiorValor > V[i])
        {
          maiorValor = V[i];
          qntdOcorre = oftenOccurs(V, V[i]);
        }
      }
    }
    printf("%d\n%d\n", maiorValor, qntdOcorre);
  }
  return 0;
}