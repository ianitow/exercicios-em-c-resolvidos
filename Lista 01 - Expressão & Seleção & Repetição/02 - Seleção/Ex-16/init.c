#include <stdio.h>
int main()
{
  int matricula, dependentes;
  float salarioMinimo, salarioFunc, taxaImposto, impostoBruto, impostoLiquido, resultado, impostoNormal;
  scanf("%d %f %d %f %f", &matricula, &salarioMinimo, &dependentes, &salarioFunc, &taxaImposto);

  if (salarioFunc > (salarioMinimo * 12))
  {
    impostoBruto = salarioFunc * 0.20;
    resultado = salarioFunc - impostoBruto;
  }
  else
  {
    if (salarioFunc > (salarioMinimo * 5))
    {
      impostoBruto = salarioFunc * 0.08;
      resultado = salarioFunc - impostoBruto;
    }
    else
    {
      impostoBruto = 0.0;
      resultado = salarioFunc;
    }
  }
  if (dependentes > 0)
  {
    impostoLiquido = impostoBruto + dependentes * (-300.00);
  }
  impostoNormal = (taxaImposto / 100) * salarioFunc;
  resultado = impostoLiquido - impostoNormal;
  printf("MATRICULA = %d\nIMPOSTO BRUTO = %.2f\nIMPOSTO LIQUIDO = %.2f\nRESULTADO = %.2f\n", matricula, impostoBruto, impostoLiquido, resultado);
  if (resultado < 0)
  {

    printf("IMPOSTO A RECEBER\n");
  }
  else
  {
    if (resultado > 0)
    {
      printf("IMPOSTO A PAGAR\n");
    }
    else
    {
      printf("IMPOSTO QUITADO\n");
    }
  }
  return 0;
}