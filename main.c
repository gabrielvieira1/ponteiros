#include <stdio.h>
#include <stdlib.h>

void calcula(int* c){
 printf("calcula %d %d/n", c, *c);
}

int main(int argc, char const *argv[])
{
 int c = 10;
 int *ponteiro;
 *ponteiro = c;

 printf("main %d %d %d\n", &c, ponteiro, c);

 c += 1;

 printf("main %d %d %d\n", &c, ponteiro, c);
 //calcula(*c);

 return 0;
}
