#include <stdio.h>

long unsigned int transforma_binario(int n)
{
  long unsigned int binario = 0;
  int result, i = 1;
  while (n != 0)
  {
    result = n % 2;
    n /= 2;
    binario += result * i;
    i = i * 10;
  }
  return binario;
}
void print_bytes(const void *end_byte, int size)
{
  int i;
  for (i = 0; i < size; i++)
  {
    unsigned char byte = *((unsigned char *)end_byte + i);

    printf("%08lu ", transforma_binario((unsigned)byte));
  }
  printf("\n");
}
int main()
{
  double d;
  scanf("%lf", &d);
  unsigned char i = d;
  unsigned short s = d;
  unsigned int ui = d;
  float f = d;

  print_bytes(&i, (int)sizeof(i));
  print_bytes(&s, (int)sizeof(s));
  print_bytes(&ui, (int)sizeof(ui));
  print_bytes(&f, (int)sizeof(f));
  print_bytes(&d, (int)sizeof(d));
  return 0;
}