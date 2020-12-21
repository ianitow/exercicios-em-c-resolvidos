#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
 
typedef struct
{
  int num_likes;
  int num_retweets;
  int num_mencoes;
} TwitterInfo;
 
int sumLines(TwitterInfo *a, int size, int type)
{
  int i, sum = 0;
  if (type == 1)
  {
    for (i = 0; i < size; i++)
    {
      sum += a[i].num_likes;
    }
  }
  else if (type == 2)
  {
    for (i = 0; i < size; i++)
    {
      sum += a[i].num_retweets;
    }
  }
  else if (type == 3)
  {
    for (i = 0; i < size; i++)
    {
      sum += a[i].num_mencoes;
    }
  }
  return sum;
}
 
int main()
{
 
  int i, j;
  int tamanhoMatriz, qntdUser;
  int user, destiny, qntd_likes, qntd_retweets, qntd_metions;
  TwitterInfo **matriz;
 
  char lastCaracter;
  scanf("%d", &tamanhoMatriz);
  scanf("%d", &qntdUser);
  matriz = (TwitterInfo **)calloc(tamanhoMatriz, sizeof(TwitterInfo));
  for (i = 1; i <= qntdUser; i++)
  {
    scanf("%d %d %d %d %d", &user, &destiny, &qntd_likes, &qntd_retweets, &qntd_metions);
    if (!matriz[user])
    {
      matriz[user] = (TwitterInfo *)malloc(tamanhoMatriz * sizeof(TwitterInfo));
      if (matriz[user] == NULL)
        exit(1);
      matriz[user][destiny].num_likes = qntd_likes;
      matriz[user][destiny].num_retweets = qntd_retweets;
      matriz[user][destiny].num_mencoes = qntd_metions;
    }
    else
    {
      matriz[user][destiny].num_likes += qntd_likes;
      matriz[user][destiny].num_retweets += qntd_retweets;
      matriz[user][destiny].num_mencoes += qntd_metions;
    }
  }
  for (i = 0; i < tamanhoMatriz; i++)
  {
 
    if (matriz[i] != NULL)
    {
      printf("Usuario %d - num. likes: %d, num. retweets: %d e num. mencoes: %d\n", i, sumLines(matriz[i], tamanhoMatriz, 1), sumLines(matriz[i], tamanhoMatriz, 2), sumLines(matriz[i], tamanhoMatriz, 3));
    }
    free(matriz[i]);
  }
 
  return 0;
}