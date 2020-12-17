#include <stdio.h>
 
int main()
{
  char op, equal;
  double a, b, c, resultado;
  scanf("%lf%c%lf%c%lf", &a, &op, &b, &equal, &c);
  if (equal != '=')
  {
    return 0;
  }
  switch (op)
  {
  case '+':
    resultado = a + b;
    if (resultado == c)
    {
      printf("CORRETO\n");
    }
    else
    {
      printf("ERRADO! O resultado deveria ser: %lf\n", resultado);
    }
    break;
  case '-':
    resultado = a - b;
    if (resultado == c)
    {
      printf("CORRETO\n");
    }
    else
    {
      printf("ERRADO! O resultado deveria ser: %lf\n", resultado);
    }
    break;
  case '/':
    resultado = a / b;
 
    if (resultado == c)
    {
      printf("CORRETO\n");
    }
    else
    {
      printf("ERRADO! O resultado deveria ser: %lf\n", resultado);
    }
    break;
  case '*':
    resultado = a * b;
    if (resultado == c)
    {
      printf("CORRETO\n");
    }
    else
    {
      printf("ERRADO! O resultado deveria ser: %lf\n", resultado);
    }
    break;
 
  default:
    break;
  }
 
  return 0;
}
