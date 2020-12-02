#include <stdio.h>
/**
* Função que calcula o valor de pi usando a série proposta por John Wallis
* @param n quantidade de termos da série
* @return o valor aproximado da constante pi
*/
void computaNotas(int n)
{
  int notas100, notas50, notas10, notas1;
  if (n > 0)
  {

    notas100 = n / 100;
    n = n - notas100 * 100;
    notas50 = n / 50;
    n = n - notas50 * 50;
    notas10 = n / 10;
    n = n - notas10 * 10;
    notas1 = n / 1;

    printf("NOTAS DE 100 = %d\nNOTAS DE 50 = %d\nNOTAS DE 10 = %d\nMOEDAS DE 1 = %d\n", notas100, notas50, notas10, notas1);
  }
}
int main(void)
{
  unsigned int t1;
  scanf("%u", &t1);
  computaNotas(t1);
  return 0;
}