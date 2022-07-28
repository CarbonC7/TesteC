//-------------------------------------------------------------------------------------------------------
/*
* @2 
* Desenvolva a função que retorna o valor fatorial no parâmetro 'valor_ft' 
*
*/
//-------------------------------------------------------------------------------------------------------
#include <stdio.h>
void calc_fatorial(int *valor_ft, int valor_n){
  if (valor_n > 1)  {
        calc_fatorial(valor_ft, valor_n - 1);
        *valor_ft *= valor_n;
    }
}
int main() {
 int v, vf = 1;
 int *pv = &v;
 scanf("%d", &v);
 calc_fatorial(&vf, *pv);
 printf("Valor fatorial de: [%d] é [%d]", v, vf);
 return 0;
}

/*/////////////////////////////////////////////////////////////////////////
// ANOTAÇÕES                                                             //
//                                                                       //
// Foi necessária a alteração da linha 16 e da linha 19 que, fazem parte //
// do código do exércicio proposto, já que o método criado               //
// necessitava um endereço e um ponteiro, além da alteração da atribuição//
// das variáveis v e vf para começarem em 1, devido ao caso de estarmos  //
// trabalhando com fatorial (para não ser necessário tratar o caso 0! a  //
// parte.                                                                //
/////////////////////////////////////////////////////////////////////////*/
