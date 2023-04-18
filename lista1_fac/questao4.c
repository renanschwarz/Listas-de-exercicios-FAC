/* 
    Um banco concederá um crédito especial aos seus clientes, variável com o saldo médio no último ano. Faça um algoritmo que calcule o valor do crédito de acordo com a tabela.
*/

#include <stdio.h>

void main() {
    
    float cred;

    printf("Informe o saldo medio: R$");
    scanf("%f", &cred);

    if (cred<1000) {
        printf("Voce nao recebeu nenhum credito");
    }
    else {
        if (cred<1500) {
            cred = cred*0.2;
            printf("Seu credito e %.2f", cred);
        }
        else {
            if (cred<2500) {
            cred = cred*0.3;
            printf("Seu credito e %.2f", cred);
            }
            else {
                cred = cred*0.4;
                printf("Seu credito e R$%.2f", cred);
            }
        }   
    }
}