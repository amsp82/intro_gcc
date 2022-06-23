#include <stdio.h>
#include <stdlib.h>
/*
    Aula: 003
    Tema: Não use a função system("pause")
    Data: 23.06.2022
*/

int main()
{
    //system("pause"); -> especifico do windows. ou seja não ira funcinaro em outros SO.
    printf("\nPressione qualquer tecla para finalizar.");
    getchar();
    return 0;
}
