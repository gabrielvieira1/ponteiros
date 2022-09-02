#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void calcula(int *c)
{
 printf("calcula %d %d/n", c, *c);
}

int main(int argc, char const *argv[])
{
 int c = 10;
 int *ponteiro;
 ponteiro = &c; // ponteiro apontando para o mesmo endereco de c
 //*ponteiro = c; Atribuindo o valor de c ao valor do ponteiro

 printf("main %d %d %d %d\n", &c, c, ponteiro, *ponteiro);

 c += 1;

 printf("main %d %d %d %d\n", &c, c, ponteiro, *ponteiro);
 // calcula(*c);

 // Ponteiro como Array

 char *chutes = (char *)malloc(sizeof(char));

 memset(chutes, '\0', sizeof(5));
 chutes[12] = 3; // Não entendi porque eu consigo acessar a posição 12

 printf(" %d %d\n", chutes, chutes[12]);

 chutes[2] = 2;

 printf(" %d %d\n", chutes, chutes[2]);

 free(chutes);

 // Exercicio

 char ch;
 char s[10];
 char sen[50];

 scanf("%c", &ch);
 scanf("%64s", s);
 scanf("\n");
 scanf("%[^\n]%*c", sen);

 printf("%c\n", ch);
 printf("%s\n", s);
 printf("%s\n", sen);

 return 0;
}
