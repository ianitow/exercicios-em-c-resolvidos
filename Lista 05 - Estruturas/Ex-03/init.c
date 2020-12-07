
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const int QNTD = 24;
const char *country[100] = {
    "brasil",
    "alemanha",
    "austria",
    "coreia",
    "espanha",
    "grecia",
    "estados-unidos",
    "inglaterra",
    "australia",
    "portugal",
    "suecia",
    "turquia",
    "argentina",
    "chile",
    "mexico",
    "antardida",
    "canada",
    "irlanda",
    "belgica",
    "italia",
    "libia",
    "siria",
    "marrocos",
    "japao",
    "\0"};
const char *messages[100] = {
    "Feliz Natal!",
    "Frohliche Weihnachten!",
    "Frohe Weihnacht!",
    "Chuk Sung Tan!",
    "Feliz Navidad!",
    "Kala Christougena!",
    "Merry Christmas!",
    "Merry Christmas!",
    "Merry Christmas!",
    "Feliz Natal!",
    "God Jul!",
    "Mutlu Noeller",
    "Feliz Navidad!",
    "Feliz Navidad!",
    "Feliz Navidad!",
    "Merry Christmas!",
    "Merry Christmas!",
    "Nollaig Shona Dhuit!",
    "Zalig Kerstfeest!",
    "Buon Natale!",
    "Buon Natale!",
    "Milad Mubarak!",
    "Milad Mubarak!",
    "Merii Kurisumasu!"
    "\0"};

typedef struct
{
  char nome[100];
  char message[100];
} Pais;

int main()
{
  int i;
  Pais *paises = malloc(QNTD * sizeof(Pais));
  char str[100];
  for (i = 0; i < QNTD; i++)
  {
    memcpy(paises[i].nome, country[i], 100);
    memcpy(paises[i].message, messages[i], 100);
  }
  while (scanf("%s%*c", str) != EOF)
  {
    int founded = 0;
    for (i = 0; i < QNTD; i++)
    {
      if (strcmp(str, paises[i].nome) == 0)
      {
        printf("%s\n", paises[i].message);
        founded = 1;
        break;
      }
    }
    if (founded == 0)
      printf("-- NOT FOUND --\n");
  }

  return 0;
}