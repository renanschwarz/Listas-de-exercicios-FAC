#include <stdio.h>

int main() {

    int id;

    printf("Digite a idade do nadador: ");
    scanf("%d", &id);

    if (id < 5) {
        printf("O nadador esta na categoria INFANTIL A");
    }
    else {
        if (id < 8) {
            printf("O nadador esta na categoria INFANTIL B");
        }
        else {
            if (id < 11) {
               printf("O nadador esta na categoria INFANTIL c"); 
            }
            else {
                if (id < 14) {
                    printf("O nadador esta na categoria JUVENIL A");
                }
                else {
                    if (id < 18) {
                        printf("O nadador esta na categoria JUVENIL B");
                    }
                    else {
                        printf("O nadador esta na categoria ADULTO");
                    }
                }
            }
        }
    }
}

