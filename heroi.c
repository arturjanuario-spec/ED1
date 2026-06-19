#include <stdio.h>
#include <stdlib.h>
#include "heroi.h"

// Estrutura COMPLETA (escondida do usuário)
struct Heroi {
    char nome[50];
    int hp;
    int ataque;
};

Heroi* criar_roster(int quantidade)
{
    return (Heroi*) malloc(sizeof(Heroi) * quantidade);
}

void ler_herois(Heroi* roster, int quantidade)
{
    for (int i = 0; i < quantidade; i++)
    {
        printf("\nHeroi %d\n", i + 1);

        printf("Nome: ");
        scanf(" %49[^\n]", roster[i].nome);

        printf("HP: ");
        scanf("%d", &roster[i].hp);

        printf("Ataque: ");
        scanf("%d", &roster[i].ataque);
    }
}

void imprimir_herois(const Heroi* roster, int quantidade)
{
    printf("\n===== ROSTER DE HEROIS =====\n");

    for (int i = 0; i < quantidade; i++)
    {
        printf("\nHeroi %d\n", i + 1);
        printf("Nome: %s\n", roster[i].nome);
        printf("HP: %d\n", roster[i].hp);
        printf("Ataque: %d\n", roster[i].ataque);
    }
}

void liberar_roster(Heroi* roster)
{
    free(roster);
}
