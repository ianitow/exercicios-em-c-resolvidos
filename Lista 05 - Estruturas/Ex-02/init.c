#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
	char nome[100];
	double preco;
} Produto;
typedef struct
{
	char nome[100];
	int quantidade;
} Compra;
void printSum(Produto *products, Compra *compras, int qntdCompras, int qntdProdutos)

{
	double sum = 0;
	int i, j;
	for (i = 0; i < qntdCompras; i++)
	{
		for (j = 0; j < qntdProdutos; j++)
		{

			if (strcmp(compras[i].nome, products[j].nome) == 0)
			{
				sum += compras[i].quantidade * products[j].preco;
			}
		}
	}
	printf("R$ %.2lf\n", sum);
}
int main()
{
	Produto *produtos;
	Compra *compras;
	int i, casesTest, qntdItems, j, k = 0, qntdCompras;
	scanf("%d", &casesTest);

	while (k < casesTest)
	{
		scanf("%d", &qntdItems);
		produtos = malloc(qntdItems * sizeof(Produto));

		for (j = 0; j < qntdItems; j++)
		{
			scanf("%s%*c", produtos[j].nome);
			scanf("%lf%*c", &produtos[j].preco);
		}
		scanf("%d", &qntdCompras);
		compras = malloc(qntdCompras * sizeof(Compra));

		for (j = 0; j < qntdCompras; j++)
		{
			scanf("%s%*c", compras[j].nome);

			scanf("%d%*c", &compras[j].quantidade);
		}
		printSum(produtos, compras, qntdCompras, qntdItems);
		free(produtos);
		free(compras);
		k++;
	}

	return 0;
}