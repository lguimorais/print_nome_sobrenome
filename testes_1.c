#include <stdio.h>
#include <stdlib.h>
char nome[40];
char sobrenome[40];
int main()
{

    // entrada de dados
    printf("informe seu primeiro nome\n");
    scanf("%s", &nome);
    printf("informe seu sobrenome\n");
    scanf("%s", &sobrenome);

    // impressão dos dados
    printf("completo nome :%s ", nome);
    printf("%s", sobrenome);
    return 0;
}
