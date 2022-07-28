//-------------------------------------------------------------------------------------------------------
/*
* @1
* Desenvolver a função: ‘maior_valor’; que recebe quatro valores do tipo inteiro e retorna o maior valor.
* 
*/
//-------------------------------------------------------------------------------------------------------
#include <stdio.h>
int maior_valor(int v1, int v2, int v3, int v4){ 
    int valor = v1;
    v2 > valor ? valor=v2 : valor /*Do nothing*/;
    v3 > valor ? valor=v3 : valor /*Do nothing*/;
    v4 > valor ? valor=v4 : valor /*Do nothing*/;
    return valor;
 
}
int main() { 
 int a, b, c, d;
 scanf("%d %d %d %d", &a, &b, &c, &d);
 int valor = maior_valor(a, b, c, d); 
 printf("%d", valor); 
 return 0;
}