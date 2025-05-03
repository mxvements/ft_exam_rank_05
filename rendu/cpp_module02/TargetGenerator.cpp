#include "TargetGenerator.hpp"

TargetGenerator::~TargetGenerator(void)
{
    for (std::map<std::string, ATarget *>::iterator i = this->_generator.begin(); i != this->_generator.end(); i++)
    {
        if (i->second)
            delete (i->second);
    }
}
TargetGenerator::TargetGenerator(void) {}
TargetGenerator::TargetGenerator(const TargetGenerator &src)
{
    *this = src;
}
TargetGenerator &TargetGenerator::operator=(const TargetGenerator &src)
{
    if (this != &src)
    {
        for (std::map<std::string, ATarget *>::const_iterator i = src._generator.begin(); i != src._generator.end(); i++)
        {
            std::pair<std::string, ATarget *> pair(i->first, i->second);
            this->_generator.insert(pair);
        }
    }
    return (*this);
}

void TargetGenerator::learnTargetType(ATarget *target)
{
    std::string type = target->getType();
    std::map<std::string, ATarget *>::iterator el = this->_generator.lower_bound(type);
    if (el->first != type)
    {
        std::pair<std::string, ATarget *> pair(type, target);
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
