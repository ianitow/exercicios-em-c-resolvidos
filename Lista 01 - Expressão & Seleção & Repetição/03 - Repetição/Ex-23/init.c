#include <stdio.h>
int main()
{
  unsigned long int codigo;
  float precoCompra;
  float precoVenda;
  int numeroVendas;

  int lucroMenor10 = 0, lucroMaior10 = 0, lucroMaior20 = 0, codigoMaiorLucro = 0, codigoMaisVendida = 0;
  double valorTotalCompra = 0, valorTotalVenda = 0, valorLucroTotal = 0;

  int valorMaiorLucro = 0;
  int valorMaisVendida = 0;

  double lucroMercadoria;
  int lucroEmPorcentagem;

  while (scanf("%lu %f %f %d", &codigo, &precoCompra, &precoVenda, &numeroVendas) != EOF)
  {
    lucroMercadoria = precoVenda * numeroVendas - precoCompra * numeroVendas;
    lucroEmPorcentagem = (lucroMercadoria / (precoCompra * numeroVendas)) * 100;
    valorTotalCompra += precoCompra * numeroVendas;
    valorTotalVenda += precoVenda * numeroVendas;

    if (lucroMercadoria > valorMaiorLucro)
    {
      valorMaiorLucro = lucroMercadoria;
      codigoMaiorLucro = codigo;
    }
    if (numeroVendas > valorMaisVendida)
    {
      valorMaisVendida = numeroVendas;
      codigoMaisVendida = codigo;
    }
    if (lucroEmPorcentagem < 10)
    {
      lucroMenor10++;
    }
    else if (lucroEmPorcentagem >= 10 && lucroEmPorcentagem <= 20)
    {
      lucroMaior10++;
    }
    else if (lucroEmPorcentagem > 20)
    {
      lucroMaior20++;
    }
  }

  printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %d\n", lucroMenor10);
  printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %d\n", lucroMaior10);
  printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %d\n", lucroMaior20);
  printf("Codigo da mercadoria que gerou maior lucro: %d\n", codigoMaiorLucro);
  printf("Codigo da mercadoria mais vendida: %d\n", codigoMaisVendida);
  printf("Valor total de compras: %.2lf, valor total de vendas: %.2lf e percentual de lucro total: %.2lf%%\n", valorTotalCompra, valorTotalVenda, ((valorTotalVenda - valorTotalCompra) / valorTotalCompra) * 100);

  return 0;
}