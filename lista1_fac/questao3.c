/* 
    Construir um algoritmo que calcule o peso ideal de uma pessoa, de acordo com o seu gênero e altura, utilizando as seguintes fórmulas:
    Para homens: (72.7*h)-58
    Para mulheres: (62.1*h)-44.7
*/

#include <stdio.h>

void main() {

    char gen;
    float h;
    float pesoIdeal;
    
    printf("Informe seu genero (M ou F): ");
    scanf("%c", &gen);
      
    if (gen == 'M'  | gen == 'm') {
        printf("\nInforme sua altura: ");
        scanf("%f", &h);
        pesoIdeal = 72.7 * h - 58;
        printf("\nSeu peso ideal e: %.1fKg \n", pesoIdeal);
    }
    else {
        if (gen == 'F' | gen == 'f') {
            printf("\nInforme sua altura: ");
            scanf("%f", &h);
            pesoIdeal = 62.1 * h - 44.7;
            printf("\nSeu peso ideal e: %.1fKg \n", pesoIdeal);
        }
        else {
            printf("Genero invalido!");
        }
    }
}