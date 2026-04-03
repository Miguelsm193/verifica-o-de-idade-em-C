#include <stdio.h>

int main() {
    int idade;
    
    scanf("%d", &idade);
    
    if (idade <= 0) {
        printf("Idade inválida\n");
    } else if (idade <= 12) {
        printf("Menor de idade (Criança)\n");
    } else if (idade < 18) {
        printf("Menor de idade (Adolescente)\n");
    } else {
        printf("Maior de idade\n");
    }
 
    return 0;
}
