#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  int codeCurso;
  float valorPorCredito;
  char nomeCurso[100 + 1];
} Curso;
typedef struct
{
  char nomeAluno[500 + 1];
  int codeCurso;
  int numeroCreditos;
} Aluno;
Curso getCourseByID(Curso *cursos, int id, int range)
{
  int i;
  for (i = 0; i < range; i++)
  {
    if (cursos[i].codeCurso == id)
    {
      return cursos[i];
    }
  }
}

int main()
{
  int i;
  int qntdCursosCadastrados, qntdAlunos;
  Curso *cursos;
  Aluno *alunos;
  scanf("%d", &qntdCursosCadastrados);
  cursos = malloc(qntdCursosCadastrados * sizeof(Curso));
  for (i = 0; i < qntdCursosCadastrados; i++)
  {
    scanf("%d %f%*c", &cursos[i].codeCurso, &cursos[i].valorPorCredito);
    scanf("%[^\n]%*c", cursos[i].nomeCurso);
  }
  scanf("%d", &qntdAlunos);

  alunos = malloc(qntdAlunos * sizeof(Aluno));
  for (i = 0; i < qntdAlunos; i++)
  {
    scanf("%*c%[^\n]", alunos[i].nomeAluno);
    scanf("%d %d", &alunos[i].codeCurso, &alunos[i].numeroCreditos);
  }

  for (i = 0; i < qntdAlunos; i++)
  {
    Curso aux = getCourseByID(cursos, alunos[i].codeCurso, qntdCursosCadastrados);
    printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2f Mensalidade: %.2f\n", alunos[i].nomeAluno, aux.nomeCurso, alunos[i].numeroCreditos, aux.valorPorCredito, (aux.valorPorCredito * alunos[i].numeroCreditos));
  }

  free(alunos);
  free(cursos);

  return 0;
}