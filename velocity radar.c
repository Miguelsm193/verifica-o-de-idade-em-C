#include <stdio.h>

/**
 * Projeto: Radar de Velocidade
 * Objetivo: Calcular pontos na carteira com base na velocidade detectada.
 */

int main() {
    float velocidade;
    int pontos = 0;

    printf("--- Radar de Velocidade ---\n");
    printf("Digite a velocidade detectada: ");
    scanf("%f", &velocidade);

    if (velocidade <= 80) { 
        printf("Status: Isento de multa.\n");
    }
    else if (velocidade >= 81 && velocidade <= 100) {
        pontos = 4;
        printf("Infracao Media: %d pontos inseridos.\n", pontos);
    }
    else if (velocidade >= 101 && velocidade <= 120) {
        pontos = 5;
        printf("Infracao Grave: %d pontos inseridos.\n", pontos);
    }
    else {
        pontos = 7;
        printf("Infracao Gravissima: %d pontos inseridos.\n", pontos);
    }

    return 0;
}
