#include <stdio.h>
#include <stdlib.h>
int main()
{

  system("chcp 65001");

  char name[50];

  printf("Введіть ваше ім'я: ");
  scanf("%49s", name);

  printf("Привіт, %s!\n", name);

  return 0;
}