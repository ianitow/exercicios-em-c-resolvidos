#include <stdio.h>
int main()
{
  char entradaTipo1, entradaTipo2, entradaTipo3;
  int entrada1, entrada2, entrada3, A, B, C;

  scanf("%d %d %d\n", &entrada1, &entrada2, &entrada3);
  scanf("%c%c%c", &entradaTipo1, &entradaTipo2, &entradaTipo3);
  if ((entrada1 <= 100 && entrada1 > 0 && entrada2 <= 100 && entrada2 > 0 && entrada3 > 0 && entrada3 <= 100))
  {
    if (entrada1 > entrada2)
    {
      C = entrada1;
      B = entrada2;
    }
    else
    {
      C = entrada2;
      B = entrada1;
    }
    if (entrada3 > C)
    {
      A = B;
      B = C;
      C = entrada3;
    }
    else
    {
      if (entrada3 > B)
      {
        A = B;
        B = entrada3;
      }
      else
      {
        A = entrada3;
      }
    }
    if (entradaTipo1 == 'A')
      printf("%d ", A);
    if (entradaTipo1 == 'B')
      printf("%d ", B);
    if (entradaTipo1 == 'C')
      printf("%d ", C);
    if (entradaTipo2 == 'A')
      printf("%d ", A);
    if (entradaTipo2 == 'B')
      printf("%d ", B);
    if (entradaTipo2 == 'C')
      printf("%d ", C);
    if (entradaTipo3 == 'A')
      printf("%d ", A);
    if (entradaTipo3 == 'B')
      printf("%d ", B);
    if (entradaTipo3 == 'C')
      printf("%d ", C);
    printf("\n");
  }

  return 0;
}