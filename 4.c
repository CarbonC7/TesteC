//---------------------------------------------------------------------------------------------------------
/*
* @4
* Desenvolva a função a qual recebe dois valores de inteiros e que faça a todas as operacoes de ‘Bitwise’ e devolva o maior resultado
* entre eles.
*/
//---------------------------------------------------------------------------------------------------------
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int calcular_maximum_bitwise(int v1, int v2) {

int v1Bin = 0;
int v2Bin = 0;
int cont = 0;

printf ("Primeiro número em binário: ");
 for(cont = 31; cont >= 0; cont--)
 {
    v1Bin = v1 >> cont;
    v1Bin & 1 ? printf("1") : printf("0");
 }
 printf("\n");
 
 printf ("Segundo número em binário: ");
 for(cont = 31; cont >= 0; cont--)
 {
    v2Bin = v2 >> cont;
    v2Bin & 1 ? printf("1") : printf("0");
 }
 
 printf("\n");
 
int OperadorAnd = v1 & v2;
printf ("%d AND %d: %d \n", v1, v2, OperadorAnd);

int OperadorOr = v1 | v2;
printf ("%d OR %d: %d \n", v1, v2, OperadorOr);

int OperadorXor = v1 ^ v2;
printf ("%d XOR %d: %d \n", v1, v2, OperadorXor);

int OperadorNot = ~ v1;
printf ("NOT %d: %d \n", v1, OperadorNot);

OperadorNot = ~ v2;
printf ("NOT %d: %d \n", v2, OperadorNot);

int OperadorLS = v1 << 1;
printf ("%d LEFT SHIFT 1: %d \n", v1, OperadorLS);

OperadorLS = v2 << 1;
printf ("%d LEFT SHIFT 1: %d \n", v2, OperadorLS);

int OperadorRS = v1 >> 1;
printf ("%d RIGHT SHIFT 1: %d \n", v1, OperadorRS);

OperadorRS = v2 >> 1;
printf ("%d RIGHT SHIFT 1: %d \n", v2, OperadorRS);

if (v1 > v2)
{
    return(v1);
}
else 
{
    return(v2);
}

}
int main() {
 int valor_1, valor_2, maior_valor;
 printf("Informe os valores.\n");
 scanf("%d %d", &valor_1, &valor_2);
 maior_valor = calcular_maximum_bitwise(valor_1, valor_2);
 
 printf("O maior valor e: %d .\n", maior_valor);
 
 return 0;
}
