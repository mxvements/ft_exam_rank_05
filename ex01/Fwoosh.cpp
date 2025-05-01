#include "Fwoosh.hpp"

Fwoosh::Fwoosh(void) : ASpell("Fwoosh","fwooshed") {}
Fwoosh::~Fwoosh(void){}

Fwoosh *Fwoosh::clone(void){
    Fwoosh *rslt = new Fwoosh();
    return (rslt);
}