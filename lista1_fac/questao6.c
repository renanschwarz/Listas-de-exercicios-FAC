/* 
    Fazer um algoritmo que determine a ordem de uma data (dia e mês) no ano.
*/

#include <stdio.h>

void main() {

    int d, m, pos;

    printf("Insira o dia: ");
    scanf("%d", &d);
    printf("Insira o mes: ");
    scanf("%d", &m);
    pos = ((30 * (m - 1)) + d); // Considerando que os meses têm 30 dias. 

    if (d < 10 && m < 10) {  // If/Else para adicionar o "0" na formatação do Dia/Mês.
    printf("0%d/0%d - Posicao numero %d do ano.", d, m, pos);
    }
    else {
        if (d < 10) {
           printf("0%d/%d - Posicao numero %d do ano.", d, m, pos); 
        }
        else {
            if (m < 10) {
                printf("%d/0%d - Posicao numero %d do ano.", d, m, pos);
            }
            else {
                printf("%d/%d - Posicao numero %d do ano.", d, m, pos);
            }
        }
    }

}
