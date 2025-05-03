#include "TargetGenerator.hpp"

TargetGenerator::~TargetGenerator(void) {}
TargetGenerator::TargetGenerator(void) {}
TargetGenerator::TargetGenerator(const TargetGenerator &src) {
   *this = src;
}
TargetGenerator &TargetGenerator::operator=(const TargetGenerator &src) {
    if (this != &src){
        for (std::map<std::string, ATarget*>::const_iterator i = src._targetTypes.begin(); i != src._targetTypes.end(); i++){
            std::pair<std::string, ATarget*> pair(i->first,i->second);
            this->_targetTypes.insert(pair);
        }
    }
    return (*this);
}

void TargetGenerator::learnTargetType(ATarget *target) {
    std::string type = target->getType();
    std::map<std::string, ATarget *>::iterator el = this->_targetTypes.lower_bound(type);
    if (el->first != type){
        std::pair<std::string, ATarget*> pair(type, target);
        this->_targetTypes.insert(pair);
    }
}
void TargetGenerator::forgetTargetType(std::string const &type) {
    std::map<std::string, ATarget*>::iterator el = this->_targetTypes.lower_bound(type);
    if (el->first == type){
        delete el->second;
        this->_targetTypes.erase(el->first);
    }
}
ATarget *TargetGenerator::createTarget(std::string const &type) {
    std::map<std::string, ATarget*>::iterator el = this->_targetTypes.lower_bound(type);
    if (el->first == type){
        return (el->second);
    }
    return (NULL);
}
