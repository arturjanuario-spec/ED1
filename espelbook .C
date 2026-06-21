#include "spellbook.h"

// cria grimório vazio
Spellbook* create_spellbook() {
    Spellbook *book = (Spellbook*)malloc(sizeof(Spellbook));
    book->head = NULL;
    return book;
}

// cria nó
static Node* create_node(int id, const char *name, int mana_cost) {
    Node *new_node = (Node*)malloc(sizeof(Node));

    new_node->data.id = id;
    strcpy(new_node->data.name, name);
    new_node->data.mana_cost = mana_cost;
    new_node->next = NULL;

    return new_node;
}

// adiciona no fim
void add_spell(Spellbook *book, int id, const char *name, int mana_cost) {
    Node *new_node = create_node(id, name, mana_cost);

    if (book->head == NULL) {
        book->head = new_node;
        return;
    }

    Node *aux = book->head;

    while (aux->next != NULL) {
        aux = aux->next;
    }

    aux->next = new_node;
}

// exibe grimório
void display_spellbook(Spellbook *book) {
    Node *aux = book->head;

    if (aux == NULL) {
        printf("Grimório vazio!\n");
        return;
    }

    while (aux != NULL) {
        printf("ID: %d, Feitiço: %s, Custo de Mana: %d\n",
               aux->data.id,
               aux->data.name,
               aux->data.mana_cost);

        aux = aux->next;
    }
}

// libera memória
void destroy_spellbook(Spellbook *book) {
    Node *aux = book->head;

    while (aux != NULL) {
        Node *temp = aux;
        aux = aux->next;
        free(temp);
    }

    free(book);
}
