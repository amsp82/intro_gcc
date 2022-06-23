#include <stdio.h>
#include <stdlib.h>
/*
    Aula: 002
    Tema: Imprimindo informações com a função printf e caractere nova linha
    Data: 23.06.2022
*/

int main()
{
    // caractere de escape para saltar uma linha -> \n
    // printf é um função de saida

    printf("\n Olá. Seja bem vindo!\n");
    printf("\n----------------------\n");
    printf("01 - Logar\n");
    printf("02 - Cadastrar\n");
    printf("03 - Imprimir\n");
    printf("------------------------\n");
    printf("Valor retornado: %d", printf("\nOi\n")); // retorna a qtd de caracter que imprimi
    return 0;
}
