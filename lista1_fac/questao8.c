/*
    Faça um algoritmo para calcular a conta final de um hóspede de um hotel, considerando que:
    a) Devem ser obtidos o nome do hóspede, o tipo do apartamento utilizado (A, B, C ou D), o número de diárias utilizadas pelo hóspede;
    b) O valor da diária é determinado pela tabela.
    c) O valor da taxa de serviço equivale a 10% da conta
    A conta a ser apresentada ao cliente deve conter: o nome do hóspede, o tipo de apartamento, o valor total das diárias, o valor do consumo interno, o subtotal, o valor da taxa de serviço e o total geral.
*/

#include <stdio.h>

void main() {

    char nome[20], ap;
    int diaria;
    float valor, consumo, sub, taxa, total;

    printf("Insira o nome do hospede: ");
    fgets(nome,20,stdin);

    printf("\nInsira o tipo de apartamento: ");
    scanf("%c", &ap);

    switch(ap) {
        case 'a':
        case 'A':
            valor = 350;
        break;
        
        case 'b':
        case 'B':
            valor = 275;
        break;

        case 'c':
        case 'C':
            valor = 200;
        break;

        case 'd':
        case 'D':
            valor = 150;
        break;

        default:
            printf("Apartamento invalido!");
            return 0;
    }
    
    printf("\nInsira a quantidade de diarias: ");
    scanf("%d", &diaria);
    valor = (valor * diaria);
    printf("\nInsira o valor do consumo interno: ");
    scanf("%f", &consumo);
    sub = (valor + consumo);
    taxa = (sub * 0.1);
    total = (taxa + sub);
    
    printf("\n   Nome: %s", nome);
    printf("   Tipo de apartamento: %c", ap);
    printf("\n   Valor total das diarias: R$%.2f", valor);
    printf("\n   Valor do consumo interno: R$%.2f", consumo);
    printf("\n   Subtotal: R$%.2f", sub);
    printf("\n   Valor da taxa de servico: R$%.2f", taxa);
    printf("\n   Total geral: R$%.2f\n\n", total);
}

