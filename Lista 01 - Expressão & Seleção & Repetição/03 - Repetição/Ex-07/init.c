#include <stdio.h>
int main()
{
  double mediaProva, mediaListas, trabalhoFinal, notas, notaFinal;
  int matricula, i, frequencia = 0;
  int MIN_REQUERIDO_FREQUENCIA = 0.75 * 128;

  while (scanf("%d", &matricula) != EOF)
  {
    if (matricula < 0)
    {
      return 0;
    }
    mediaProva = mediaListas = trabalhoFinal = notas = notaFinal = frequencia = 0;

    for (i = 0; i < 8; i++)
    {
      scanf("%lf", &notas);
      mediaProva += notas;
    }
    mediaProva /= 8;
    for (i = 0; i < 5; i++)
    {
      scanf("%lf", &notas);
      mediaListas += notas;
    }
    mediaListas /= 5;
    scanf("%lf", &trabalhoFinal);
    notaFinal = 0.7 * mediaProva + 0.15 * mediaListas + 0.15 * trabalhoFinal;
    scanf("%d", &frequencia);
    printf("Matricula: %d, Nota Final: %.2f, Situacao Final: ", matricula, notaFinal);
    if (notaFinal >= 6 && frequencia >= MIN_REQUERIDO_FREQUENCIA)
    {
      printf("APROVADO");
    }
    else if (notaFinal >= 6 && frequencia < MIN_REQUERIDO_FREQUENCIA)
    {
      printf("REPROVADO POR FREQUENCIA");
    }
    else if (notaFinal < 6 && frequencia >= MIN_REQUERIDO_FREQUENCIA)
    {
      printf("REPROVADO POR NOTA");
    }
    else if (notaFinal < 6 && frequencia < MIN_REQUERIDO_FREQUENCIA)
    {
      printf("REPROVADO POR NOTA E POR FREQUENCIA");
    }
    printf("\n");
  }

  return 0;
}