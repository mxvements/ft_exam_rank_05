#include "ATarget.hpp"
#include  "ASpell.hpp"

ATarget::~ATarget(void){}

ATarget::ATarget(std::string type): _type(type) {}

const std::string &ATarget::getType(void) const { return this->_type; }

void ATarget::getHitBySpell(const ASpell &src) const {
    std::cout << this->_type << " has been " << src.getEffects() << "!" <<std::endl;
}
