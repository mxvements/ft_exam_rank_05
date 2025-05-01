#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::~ASpell(void){}

ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects) {}

std::string ASpell::getName(void) const { return this->_name; }

std::string ASpell::getEffects(void) const { return this->_effects; }

void ASpell::launch(const ATarget &src) const {
    src.getHitBySpell(*this);
}