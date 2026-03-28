#include <stdio.h>

int main()
{

    int idade = 26;
    float altura = 1.64;
    char opcao = 'I';
    char nome[20] = "isadora";

    // printf("A idade de %s\n é: %d\n", nome, idade);
    printf("O nome é: %s\n", nome);
    printf("A idade é: %d\n", idade);
    printf("A altura é: %.2f\n", altura);
    printf("A opcao é: %c\n", opcao);

    /*
    printf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3)

    %d: Imprime um inteiro no formato decimanl.
    %i: Equivalente a %d.
    %f: Imprime um número de ponto flutuante no formato padrão.
    %e: Imprime um número de ponto flutuante na notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.



    */
}