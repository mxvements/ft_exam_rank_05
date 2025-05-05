#include "TargetGenerator.hpp"

TargetGenerator::~TargetGenerator(void)
{
    for (std::map<std::string, ATarget *>::iterator i = this->_generator.begin(); i != this->_generator.end(); i++)
    {
        if (i->second)
            delete (i->second);
    }
    _generator.clear();
}
TargetGenerator::TargetGenerator(void) {}

void TargetGenerator::learnTargetType(ATarget *target)
{
    std::string type = target->getType();
    std::map<std::string, ATarget *>::iterator el = this->_generator.lower_bound(type);
    if (el->first != type)
    {
        std::pair<std::string, ATarget *> pair(type, target->clone());
        this->_generator.insert(pair);
    }
}
void TargetGenerator::forgetTargetType(std::string const &type)
{
    std::map<std::string, ATarget *>::iterator el = this->_generator.lower_bound(type);
    if (el->first == type)
    {
        delete el->second;
        this->_generator.erase(el->first);
    }
}
ATarget *TargetGenerator::createTarget(std::string const &type)
{
    std::map<std::string, ATarget *>::iterator el = this->_generator.lower_bound(type);
    if (el->first == type)
    {
        return (el->second);
    }
    return (NULL);
}
