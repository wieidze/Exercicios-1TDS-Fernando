#include <stdio.h>

int main()
{
 int linhas;
 printf("digite a quantidade de linhas ");
 scanf("%d+",&linhas);
 
 for(int qtd_linhas= 0; qtd_linhas <= linhas ;qtd_linhas++){
     for(int espaco = qtd_linhas;espaco <= linhas - 1;espaco++){
        printf(" ");
     }
     
     for(int asteriscos = 1; asteriscos <= qtd_linhas + qtd_linhas - 1; asteriscos++){
         printf("*");
     }
     printf("\n");
 }
}
