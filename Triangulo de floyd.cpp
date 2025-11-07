#include <stdio.h>

int main() {
    int linhas;
    int numero = 1;

   
    printf("Digite a quantidade de linhas: ");
    scanf("%d", &linhas);

    for (int qtd_linhas = 1; qtd_linhas <= linhas; qtd_linhas++) {
       
       
        for (int contador_dnmr = 0; contador_dnmr < qtd_linhas; contador_dnmr++) {
            printf("%d ", numero);  
            numero++;
        }

       
        printf("\n");
    }

    return 0;
}
