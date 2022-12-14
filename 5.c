//---------------------------------------------------------------------------------------------------------
/*
* @5
* Desenvolva a função a qual recebe três arrays, os dois primeiros são de inteiros o terceiro é de caracteres, o qual deve ser
* preenchido com 'X' ou 'O' pela função.
* 
* A função deve comparar os dois arrays de inteiros, procurando se os valores do array de 'cartela' é encontrada
* dentro do array de 'sorteio'.
*Caso o numero de 'cartela' seja encontrada dentro do array de 'sorteio', a posicao do número da 'cartela' (índice) deve ser
* usada para marcar o 'X' dentro do array 'marcacao', caso contrário voce deve marcar 'O'. 
* Obs.1: Arrays: 'cartela' e 'marcacao' tem o mesmo tamanho, já o array de sorteio pode ser de tamanho diferente.
* Obs.2: Os numeros nos arrays de inteiros não estão ordenados e não ha duplicacao
* +++++++++++++++++++++++++++++++++++++++
* Exemplo....
* 
* Sorteio: 1, 5, 6, 7, 8, 45, 3, 10, 13
*Cartela: 1, 2, 3, 4, 5, 6, 7, 11
* Marcacao: X, O, X, O, X, X, X, 0
* +++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------------------------------------
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_SORTEIO 30
#define MAX_MARCACAO 15
void avaliar_marcacao(int *sorteio, int tam_sorteio, int *cartela, char* marcacao, int tam_marcacao) {
 
// printf("%d %d %d %d %s", *sorteio, tam_sorteio, *cartela, tam_marcacao, marcacao);
 
    int cont = 0;
    int ador = 0;
    int verify = 0;
 
    while (cont < tam_marcacao)
    {
        verify = 0;
        ador = 0;
        while(ador < tam_sorteio)
        {
            if (cartela[cont] == sorteio[ador])
            {
                verify = 1;
            }
        ador++;
        }
        if (verify == 0)
        {
          marcacao[cont] = 'O';  
        }
        else
        {
            marcacao[cont] = 'X';
        }
        cont++;
    }
}

int main() {
 int sorteio[MAX_SORTEIO] = {11,21,5,1,8,20,60,58,44,49,25,12,14,27,50,56,9,29,33,10,40,6,51,55,22};
 int cartela[MAX_MARCACAO] = {2,15,33,41,48,3,20,35,44,57,12,29,40,50,60};
 char marcacao[MAX_MARCACAO] = {""};
 
 avaliar_marcacao(sorteio, MAX_SORTEIO, cartela,marcacao, MAX_MARCACAO);
 
 int idx = 0;
 do {
 printf(" %c ", marcacao[idx]);
 if((++idx)%5 == 0) {
 printf("\n");
 }
 }while (idx < MAX_MARCACAO);
 return 0;
}