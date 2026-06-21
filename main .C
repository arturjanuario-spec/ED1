#include "spellbook.h"

int main() {

    Spellbook *book = create_spellbook();

    add_spell(book, 1, "Fireball", 30);
    add_spell(book, 2, "Ice Spike", 20);
    add_spell(book, 3, "Lightning Bolt", 40);

    printf("=== GRIMÓRIO ===\n");
    display_spellbook(book);

    destroy_spellbook(book);

    return 0;
}
