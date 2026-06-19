#ifndef PERSONAGEM_H
#define PERSONAGEM_H

// Tipo opaco (usuário não vê a struct interna)
typedef struct personagem Personagem;

// Interface do TAD
Personagem* cria_party(int num_membros);
void registra_membros(Personagem* party, int num_membros);
void exibe_relatorio(const Personagem* party, int num_membros);
void libera_party(Personagem* party);

#endif
