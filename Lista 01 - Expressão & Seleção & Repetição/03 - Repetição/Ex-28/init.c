#include <stdio.h>
#include <math.h>
int main()
{
  const double TAXA_INSS = 0.08;
  double salarioMinimo, valorLimiteIsencao, precoTelevisorA, precoTelevisorB;
  int matricula, vendidoA, vendidoB;

  double salarioBruto, salarioLiquido;
  scanf("%lf %lf %lf %lf", &salarioMinimo, &valorLimiteIsencao, &precoTelevisorA, &precoTelevisorB);
  while (1)
  {
    scanf("%d %d %d", &matricula, &vendidoA, &vendidoB);
    if (matricula == 0)
      break;
    salarioBruto = salarioMinimo;
    if (vendidoA >= 10)
    {
      salarioBruto += (0.14 * precoTelevisorA) * vendidoA;
    }
    else
    {
      salarioBruto += (0.13 * precoTelevisorA) * vendidoA;
    }
    if (vendidoB >= 20)
    {
      salarioBruto += (0.13 * precoTelevisorB) * vendidoB;
    }
    else
    {
      salarioBruto += (0.12 * precoTelevisorB) * vendidoB;
    }
    salarioLiquido = salarioBruto - (TAXA_INSS * salarioBruto);
    if (salarioLiquido > valorLimiteIsencao)
    {
      salarioLiquido = salarioLiquido - (salarioLiquido - valorLimiteIsencao) * 0.15;
    }

    printf("MATRICULA = %d, SALARIO BRUTO = %.2lf, SALARIO LIQUIDO = %.2lf \n", matricula, salarioBruto, salarioLiquido);
  }

  return 0;
}