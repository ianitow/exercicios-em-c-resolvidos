#include <stdio.h>
int main()
{
  char *cota;
  const float salarioMinimo = 937.00;
  int qtdPessoas, tipoEscola, etnia = -1;
  float rendaBruta;
  scanf("%f %d %d %d", &rendaBruta, &qtdPessoas, &tipoEscola, &etnia);
  rendaBruta /= qtdPessoas;
  if (tipoEscola == 2 && rendaBruta <= (salarioMinimo * 2) && (etnia <= 3 && etnia >= 1))
  {
    cota = "L2";
    printf("ALUNO COTISTA (%s)\n", cota);
    return 0;
  }
  if (tipoEscola == 2 && rendaBruta <= (salarioMinimo * 2))
  {
    cota = "L1";
    printf("ALUNO COTISTA (%s)\n", cota);
    return 0;
  }

  if (tipoEscola == 2 && (etnia <= 3 && etnia >= 1))
  {
    cota = "L4";
    printf("ALUNO COTISTA (%s)\n", cota);
    return 0;
  }
  if (tipoEscola == 2)
  {
    cota = "L3";
    printf("ALUNO COTISTA (%s)\n", cota);
    return 0;
  }
  printf("ALUNO NAO COTISTA\n");
  return 0;
}