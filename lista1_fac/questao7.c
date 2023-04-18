/* 
    Escreva um algoritmo para calcular o salário semanal de uma pessoa, determinado pelas condições que seguem: 
    Se o número de horas trabalhado for inferior ou igual a 40, a pessoa recebe x reais por hora; caso contrário, a pessoa recebe um adicional de 50% para cada hora trabalhada acima das 40 iniciais.
*/

#include <stdio.h>

void main() {

    float horas;

    printf("Quantas horas a pessoa trabalhou na semana? ");
    scanf("%f", &horas);

    if (horas <= 40) {
       printf("\nA pessoa ira receber %fx reais.", horas); 
    }
    else {
        horas = (40 + ((horas - 40) * 1.5));
        printf("\nA pessoa ira receber %.1fx reais.", horas);
    }
}