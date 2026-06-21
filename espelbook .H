#ifndef SPELLBOOK_H
#define SPELLBOOK_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura do feitiço
typedef struct {
    int id;
    char name[50];
    int mana_cost;
} Spell;

// Nó da lista
typedef struct no {
    Spell data;
    struct no *next;
} Node;

// Tipo abstrato (grimório)
typedef struct {
    Node *head;
} Spellbook;

// Funções públicas
Spellbook* create_spellbook();
void add_spell(Spellbook *book, int id, const char *name, int mana_cost);
void display_spellbook(Spellbook *book);
void destroy_spellbook(Spellbook *book);

#endif
