#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char tipo[50];
    int hp;
} Inimigo;

int main() {

    int n;

    scanf("%d", &n);

    Inimigo inimigo;

    for (int i = 0; i < n; i++) {

        scanf("%s %d", inimigo.tipo, &inimigo.hp);

        printf("Inimigo: %s, HP: %d\n", inimigo.tipo, inimigo.hp);
    }

    return 0;
}
