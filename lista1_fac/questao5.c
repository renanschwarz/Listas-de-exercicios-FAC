/* 
    Escrever um algoritmo que, dada uma quantia em reais, calcule o menor número possível de notas/moedas (100, 50, 20, 10, 5, 2 e 1) em que o valor pode ser decomposto.
*/

#include <stdio.h>

void main() {

    float valor;
    int n100, n50, n20, n10, n5, n2, m1, m050, m025, m010, m005, m001;
    
    printf("Insira a quantia em reais: R$");
    scanf("%f", &valor);
    

    n100 = (valor / 100);
    n50 = ((valor - (n100 * 100)) / 50);
    n20 = ((valor - (n100 * 100) - (n50 * 50)) / 20);
    n10 = ((valor - (n100 * 100) - (n50 * 50) - (n20 * 20)) / 10);
    n5 = ((valor - (n100 * 100) - (n50 * 50) - (n20 * 20) - (n10 * 10)) / 5);
    n2 = ((valor - (n100 * 100) - (n50 * 50) - (n20 * 20) - (n10 * 10) - (n5 * 5)) / 2);
    m1 = ((valor - (n100 * 100) - (n50 * 50) - (n20 * 20) - (n10 * 10) - (n5 * 5) - (n2 * 2)));
    m050 = ((valor - (n100 * 100) - (n50 * 50) - (n20 * 20) - (n10 * 10) - (n5 * 5) - (n2 * 2) - m1) / 0.5);
    m025 = ((valor - (n100 * 100) - (n50 * 50) - (n20 * 20) - (n10 * 10) - (n5 * 5) - (n2 * 2) - m1 - (m050 * 0.5)) / 0.25);
    m010 = ((valor - (n100 * 100) - (n50 * 50) - (n20 * 20) - (n10 * 10) - (n5 * 5) - (n2 * 2) - m1 - (m050 * 0.5) - (m025 * 0.25)) / 0.1);
    m005 = ((valor - (n100 * 100) - (n50 * 50) - (n20 * 20) - (n10 * 10) - (n5 * 5) - (n2 * 2) - m1 - (m050 * 0.5) - (m025 * 0.25) - (m010 * 0.1)) / 0.05);
    m001 = ((valor - (n100 * 100) - (n50 * 50) - (n20 * 20) - (n10 * 10) - (n5 * 5) - (n2 * 2) - m1 - (m050 * 0.5) - (m025 * 0.25) - (m010 * 0.1) - (m005 * 0.05)) / 0.01);

    printf("Notas de R$100: %d \nNotas de R$50: %d \nNotas de R$20: %d \nNotas de R$10: %d \nNotas de R$5: %d \nNotas de R$2: %d \nMoedas de R$1: %d \nMoedas de R$0,50: %d \nMoedas de R$0,25: %d \nMoedas de R$0,10: %d \nMoedas de R$0,05: %d \nMoedas de R$0,01: %d ", n100, n50, n20, n10, n5, n2, m1, m050, m025, m010, m005, m001);  
}