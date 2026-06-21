#include <stdio.h>
#include "personagem.h"

int main() {
    int num_membros;

    printf("Quantos membros terá a equipe? ");
    scanf("%d", &num_membros);

    Personagem* equipe = cria_party(num_membros);

    registra_membros(equipe, num_membros);

    exibe_relatorio(equipe, num_membros);

    libera_party(equipe);

    return 0;
}
