#include <stdio.h>

int main() {
    char nome[100];
    int xp;

    printf("Digite o nome do heroi: ");
    scanf("%s", nome);

    printf("Digite a quantidade de experiencia (XP) do heroi: ");
    scanf("%d", &xp);

    char nivel[20];

    if (xp < 1000) {
        snprintf(nivel, sizeof(nivel), "Ferro");
    }
    else if (xp <= 2000) {
        snprintf(nivel, sizeof(nivel), "Bronze");
    }
    else if (xp <= 5000) {
        snprintf(nivel, sizeof(nivel), "Prata");
    }
    else if (xp <= 7000) {
        snprintf(nivel, sizeof(nivel), "Ouro");
    }
    else if (xp <= 8000) {
        snprintf(nivel, sizeof(nivel), "Platina");
    }
    else if (xp <= 9000) {
        snprintf(nivel, sizeof(nivel), "Ascendente");
    }
    else if (xp <= 10000) {
        snprintf(nivel, sizeof(nivel), "Imortal");
    }
    else {
        snprintf(nivel, sizeof(nivel), "Radiante");
    }

    printf("O Heroi %s está no nível %s\n", nome, nivel);

    return 0;
}
