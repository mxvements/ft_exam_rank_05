#include "Fireball.hpp"

Fireball::Fireball(void) : ASpell("Fireball","burnt to a crisp") {}
Fireball::~Fireball(void){}

Fireball *Fireball::clone(void){
    Fireball *rslt = new Fireball();
    return (rslt);
}