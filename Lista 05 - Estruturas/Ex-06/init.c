#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
  int matricula;
  int dia;
  int mes;
  int ano;
  long int timestamp;
  char nomeAluno[200 + 1];
} Matricula;

void getTimestamp(int day, int month, int year, long int *timestamp)
{
  struct tm t;
  time_t t_of_day;

  t.tm_year = year;
  t.tm_mon = month;
  t.tm_mday = day;
  t.tm_hour = 0;
  t.tm_min = 0;
  t.tm_sec = 0;
  *timestamp = mktime(&t);
}
void ordenaVetor(Matricula *matriculas, int N)
{
  int i, swapped = 0;
  Matricula aux;
  do
  {
    swapped = 0;
    for (i = 0; i < N; i++)
    {
      if (i + 1 < N && matriculas[i].timestamp < matriculas[i + 1].timestamp)
      {
        aux = matriculas[i + 1];
        matriculas[i + 1] = matriculas[i];
        matriculas[i] = aux;
        swapped = 1;
      }
    }

  } while (swapped == 1);
}

int main()
{
  Matricula *matriculas;
  int qntd;
  int i;
  scanf("%d", &qntd);
  matriculas = malloc(qntd * sizeof(Matricula));
  for (i = 0; i < qntd; i++)
  {
    scanf("%d %d %d %d%*c %[^\n]%*c", &matriculas[i].matricula, &matriculas[i].dia, &matriculas[i].mes, &matriculas[i].ano, matriculas[i].nomeAluno);
    getTimestamp(matriculas[i].dia, matriculas[i].mes, matriculas[i].ano, &matriculas[i].timestamp);
  }
  ordenaVetor(matriculas, qntd);
  for (i = 0; i < qntd; i++)
  {
    printf("Matric.: %d Nome: %s Data Nasc: %d/%d/%d\n", matriculas[i].matricula, matriculas[i].nomeAluno, matriculas[i].dia, matriculas[i].mes, matriculas[i].ano);
  }
  free(matriculas);

  return 0;
}