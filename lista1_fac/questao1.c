/* O custo ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem  do distribuidor e dos impostos (aplicados ao custo de fábrica). Desenvolver um algoritmo que calcule o custo ao consumidor de determinado carro. */

#include <stdio.h>

 void main() {
   
    float custoFabrica;
    float percent1;
    float percent2;
    float percent3;
    float custoFinal;

    printf("Insira o valor de fabrica do carro: R$");
    scanf("%f", &custoFabrica);
    printf("\nInsira o valor da porcentagem do distribuidor: ");
    scanf("%f", &percent1);
    printf("\nInsira o valor da porcentagem dos impostos: ");
    scanf("%f", &percent2);

    percent3 = (1 + (percent1 + percent2) / 100);
    custoFinal = (custoFabrica * percent3);

    printf("\nO custo final do veiculo e: R$ %.2f \n", custoFinal);
}